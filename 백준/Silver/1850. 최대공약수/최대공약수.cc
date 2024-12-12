#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int gcd (long a, long b) {
    if (a%b == 0) return b;
    else return gcd(b, a%b);
}

int main() {
    long long int n, m, c=1;
    cin>> n>> m;
    c = gcd(n, m);
    for (int i =0; i<c; i++) {
        cout << '1';
    }


    return 0;
}
