#include <stdio.h>

int main() {
    int n, v, count = 0;
    scanf("%d", &n); // 정수의 개수 입력
    
    int arr[100]; // 배열 선언
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // 배열에 값 입력
    }
    
    scanf("%d", &v); // 찾고자 하는 값 입력
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == v) {
            count++; // 값이 일치하면 count 증가
        }
    }
    
    printf("%d\n", count); // 결과 출력
    return 0;
}