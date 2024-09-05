#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n, m,  cnt=0, result=0;
    long long sum=0;
    cin >> n >> m;
    vector<long long int> v(n);
    for (int i=0; i<n; i++ ) cin >> v[i];
    sort(v.begin(), v.end());

    int end= n-1, start=0;

    while (start<end) {
        sum = v[start]+v[end];
        if (sum<m) {
            start++;
        }
        else if (sum>m) {
            end--;
        }
        else if (sum==m){
            result++;
            start++;
            end--;
        }
    }
    cout << result;
    return 0;
}
