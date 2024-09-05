#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n, m;
    int o, y;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> sumV(n+1, 0);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sumV[i+1]+=v[i]+ sumV[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> o >> y;
        cout << sumV[y]-sumV[o-1] << '\n';
    }

    return 0;
}
