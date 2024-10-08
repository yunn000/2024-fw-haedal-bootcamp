#include <stdio.h>

int main() {
    FILE *fp = fopen("data.txt","wt");
    if (fp == NULL){
        printf("파일 오픈 실패!");
    return -1;
    }

    fputs("#이름: 윤성우",fp);
    fputs("#주민번호:900208-1012589",fp);
    fputs("#전화번호: 010-1111-2222",fp);

    fclose(fp);
    return 0;
}