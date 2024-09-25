#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);  // 연도를 입력받음

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("1\n");  // 윤년일 경우 1 출력
    } else {
        printf("0\n");  // 윤년이 아닐 경우 0 출력
    }

    return 0;
}