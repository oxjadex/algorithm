#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k, c=0, j;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 1; i < n; i++) {
        k = v[i];
        for (j = i-1; j >=0; j--) {
            if (v[j] > k) {
                v[j+1] = v[j];
            }
            else break;
        }
        v[j+1]=k;
    }

    for (int i = 0; i < n; i++) {
        c+=v[i];
        v[i+1]+=v[i];
    }
    cout << c << endl;


    return 0;
}
