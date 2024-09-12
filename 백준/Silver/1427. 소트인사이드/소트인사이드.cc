#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();
    vector<int> v(n );

    for (int i = 0; i < s.length(); i++) {
        v[i]=s[i]-'0';
    }


    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]);
            }
        }
    }

    for (int i = n-1; i >=0; i--) {
        cout << v[i];
    }

}
