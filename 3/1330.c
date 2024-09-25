#include <stdio.h>

int main() {
    int A, B;
    
    scanf("%d %d", &A, &B);  // 두 정수 A와 B를 입력받음
    
    if (A > B) {
        printf(">\n");  // A가 B보다 큰 경우
    } else if (A < B) {
        printf("<\n");  // A가 B보다 작은 경우
    } else {
        printf("==\n");  // A와 B가 같은 경우
    }

    return 0;
}