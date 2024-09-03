#include <iostream>
#include <vector>
#include <algorithm> // std::max_element
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    // 최대값 구하기
    int max_score = *max_element(scores.begin(), scores.end());

    // 조정된 점수의 합 계산
    double sum_adjusted_scores = 0.0;
    for (int i = 0; i < n; i++) {
        sum_adjusted_scores += (double)scores[i] / max_score * 100;
    }

    // 조정된 점수의 평균 계산
    double average = sum_adjusted_scores / n;

    // 평균 출력
    cout << average << endl;

    return 0;
}
