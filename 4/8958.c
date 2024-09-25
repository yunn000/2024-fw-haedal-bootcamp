#include <stdio.h>
#include <string.h>

int main() {
    int n; // 테스트 케이스의 개수
    scanf("%d", &n); // 테스트 케이스 입력
    
    for (int i = 0; i < n; i++) {
        char result[80]; // OX 결과를 저장할 문자열 배열
        scanf("%s", result); // 결과 입력
        
        int score = 0; // 총 점수
        int consecutive = 0; // 연속된 O의 개수
        
        for (int j = 0; j < strlen(result); j++) {
            if (result[j] == 'O') {
                consecutive++; // O일 경우 연속된 O의 개수 증가
                score += consecutive; // 현재 연속된 O의 개수만큼 점수 추가
            } else {
                consecutive = 0; // X일 경우 연속된 O의 개수 초기화
            }
        }
        
        printf("%d\n", score); // 점수 출력
    }
    
    return 0;
}