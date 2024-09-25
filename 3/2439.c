#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // 숫자를 입력받음
    
    for(int i = 1; i <= n; i++) {
        // 공백 출력
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // 별 출력
        for(int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");  // 한 줄 끝나면 줄 바꿈
    }
    
    return 0;
}