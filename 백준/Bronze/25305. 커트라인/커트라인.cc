#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, d;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> d;
        v[i] =d;
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout << v[m-1] << endl;

    return 0;
}

// 100 98b