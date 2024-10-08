#include <stdio.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "a");

    if (fp == NULL) {
        puts("파일 열기 실패");
        return -1;
    }

    fputs("#즐겨먹는 음식: 짬뽕, 탕수육\n", fp);
    fputs("#취미: 축구\n", fp);

    fclose(fp);
    puts("mystory.txt 파일에 데이터 추가 완료");
    return 0;
}