#include <stdio.h>

int main() {
    int numbers[10];
    int remainders[42] = {0}; // 42로 나눈 나머지를 저장하는 배열
    int count = 0;

    // 10개의 숫자 입력 및 나머지 계산
    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        int remainder = num % 42;
        remainders[remainder] = 1; // 나머지를 인덱스로 표시
    }

    // 서로 다른 나머지의 개수 계산
    for (int i = 0; i < 42; i++) {
        if (remainders[i] == 1) {
            count++;
        }
    }

    printf("%d\n", count); // 결과 출력
    return 0;
}