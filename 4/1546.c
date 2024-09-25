#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 시험 본 과목 수 입력

    double scores[n];
    double max = 0.0, sum = 0.0;

    // 점수 입력 및 최고 점수 찾기
    for (int i = 0; i < n; i++) {
        scanf("%lf", &scores[i]);
        if (scores[i] > max) {
            max = scores[i]; // 최고 점수 갱신
        }
    }

    // 새로운 점수 계산 및 합산
    for (int i = 0; i < n; i++) {
        sum += (scores[i] / max) * 100; // 새로운 점수 계산 후 합산
    }

    // 평균 출력
    printf("%lf\n", sum / n);

    return 0;
}