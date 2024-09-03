#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, max=0;
    double b=0;
    cin >> a;
    vector <int> v(a);

    for (int i = 0; i < a; i++) {
        cin >> v[i];
        if (v[i]>max) max=v[i];
        b+=v[i];
    }
    cout << ((b / max) / a) * 100 ;
    return 0;
}
