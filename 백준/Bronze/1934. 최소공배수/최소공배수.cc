#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    vector<int> answer(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i] >> v2[i];
    }

    int tmp;
    for (int i = 0; i < n; i++) {
        int a = v[i], b = v2[i];
        while (b) {
            tmp = a % b;
            a = b;
            b = tmp;
        }
        answer[i] = v[i] * v2[i] / a;
    }

    for (int i = 0; i < n; i++) {
        cout << answer[i] << endl;
    }


    return 0;
}
