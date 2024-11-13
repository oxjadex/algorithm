#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int n, i, value, sum = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        cin >> value;
        pq.push(value);
    }

    while (pq.size()>1) {
        int first = pq.top();

        pq.pop();
        int second = pq.top();
        pq.pop();
        sum += first + second;
        pq.push(first+second);
    }
// 73, 18, 14, 24, 13
    cout << sum;

    return 0;
}
