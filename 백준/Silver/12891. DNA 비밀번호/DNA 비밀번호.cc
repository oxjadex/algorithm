#include <iostream>
#include <vector>
using namespace std;

int main() {
    // freopen("12891_input.txt", "rt", stdin); // 파일 입력 (디버깅용으로 주석 처리 가능)
    int n, m, result = 0;
    string in;
    vector<int> check(4); // 필요한 A, C, G, T의 최소 개수
    vector<int> my(4, 0); // 현재 윈도우의 A, C, G, T 개수

    cin >> n >> m;
    cin >> in;
    for (int i = 0; i < 4; i++) {
        cin >> check[i];
    }

    // 슬라이딩 윈도우
    for (int i = 0; i < n; i++) {
        // 오른쪽 끝 문자 추가
        if (in[i] == 'A') my[0]++;
        else if (in[i] == 'C') my[1]++;
        else if (in[i] == 'G') my[2]++;
        else if (in[i] == 'T') my[3]++;

        // 현재 윈도우의 길이가 m 이상일 때 왼쪽 끝 문자 제거
        if (i >= m) {
            if (in[i - m] == 'A') my[0]--;
            else if (in[i - m] == 'C') my[1]--;
            else if (in[i - m] == 'G') my[2]--;
            else if (in[i - m] == 'T') my[3]--;
        }

        // 윈도우의 길이가 정확히 m일 때 조건을 검사
        if (i >= m - 1) {
            if (my[0] >= check[0] && my[1] >= check[1] && my[2] >= check[2] && my[3] >= check[3]) {
                result++;
            }
        }
    }

    cout << result << endl;
    return 0;
}
