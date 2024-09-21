#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n), result(n, -1); // result를 -1로 설정해서 없을 때는 -1 출력하느거
    stack<int> s;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) { // 스택에는 index를 넣을거임
        while (!s.empty() && v[s.top()] < v[i]) { // 스택에 뭔가 있거나 s의 top(top이라서 가장 최근에 들어온 값) 이 비교하는 값보다 작을 때만 ->
            // 그래서 3 5 2 7을 예로 들면
            // 계속 pop 하면서 top 을 갈아치우며 비교하기
            // 처음 돌 때는 스택에 아무 것도 없어서 바로 스택에 0을 넣음
            result[s.top()] = v[i];
            // 큰 거는 오른수니까 result에 넣어주기
            s.pop();
            // 오큰수로 들어간 인덱스는 스택에서 제거
        }
        s.push(i); // 스택에 인덱스 넣기
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
