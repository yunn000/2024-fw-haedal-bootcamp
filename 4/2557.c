#include <stdio.h>

int main() {
    int A, B, C;
    int result;
    int count[10] = {0}; // 0부터 9까지의 개수를 저장할 배열
    
    // A, B, C 값 입력
    scanf("%d %d %d", &A, &B, &C);
    
    // A * B * C의 결과
    result = A * B * C;
    
    // 각 자릿수의 숫자를 세기
    while (result > 0) {
        count[result % 10]++; // 마지막 자리 수를 카운트
        result /= 10; // 마지막 자리 제거
    }
    
    // 0부터 9까지 각 숫자의 개수 출력
    for (int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }
    
    return 0;
}