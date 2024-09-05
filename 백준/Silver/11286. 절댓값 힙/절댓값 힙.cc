#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

struct compare{
    bool operator()(int a, int b){
        if (abs(a)==abs(b))
            return a>b;
        else return abs(a)>abs(b);
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n, d;
    cin >> n;
    priority_queue<int, vector<int>,  compare>q;
    for (int i = 0; i < n; i++) {
        cin >> d;
        if (d==0) {
            if (q.empty()) cout << '0' << '\n';
            else {
                cout << q.top() << '\n';
                q.pop();
            }
            
        }
        else {
            q.push(d);
        }

    }
    return 0;
}
