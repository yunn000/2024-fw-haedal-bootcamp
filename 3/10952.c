#include <stdio.h>

int main() {
    int a, b;

    while (1) {
        scanf("%d %d", &a, &b);  // 두 정수 A와 B를 입력받음
        if (a == 0 && b == 0) {
            break;  // A와 B가 모두 0일 경우 종료
        }
        printf("%d\n", a + b);  // A + B 출력
    }

    return 0;
}