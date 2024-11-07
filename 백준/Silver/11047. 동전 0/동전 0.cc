#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k, result=0;
    cin >> n >> k;
    int f = k;
    vector<int> coin(n);
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }
    reverse(coin.begin(), coin.end());

    for (int i = 0; i < n; i++) {
        result += f/coin[i];
        if (f/coin[i] !=0) {
            f = f % coin[i];
        }
    }

    cout << result;
    return 0;
}
