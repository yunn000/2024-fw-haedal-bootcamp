#include <stdio.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "w");

    if (fp == NULL) {
        puts("파일 생성 실패");
        return -1;
    }

    fputs("#이름: 윤성우\n", fp);
    fputs("#주민번호: 900208-1012589\n", fp);
    fputs("#전화번호: 010-1111-2222\n", fp);

    fclose(fp);
    puts("mystory.txt 파일에 데이터 저장 완료");
    return 0;
}