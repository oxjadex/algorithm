#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n, a;

long long gcd(long long x, long long y) {
    if (!y) return x;
    return gcd(y, x % y);
}

long long extended_gcd(long long a, long long b, long long &x, long long &y) {
    if (!b) {
        x = 1, y = 0;
        return a;
    }

    long long ret = extended_gcd(b, a % b, x, y);
    long long temp = y;
    y = x - (a / b) * y;
    x = temp;

    if (x <= 0) {
        x += b;
        y -= a;
    }
    return ret;

}


int main() {
    long long b, c, x, y;
    scanf("%lld %lld", &n, &a);
    long long plu, mul;

    plu = n-a;

    if (gcd(n, a) != 1) mul = -1;
    else {
        extended_gcd(a, n, x, y);
        mul = (x % n + n) % n;
    }
    printf("%lld %lld", plu, mul);

    return 0;
}
