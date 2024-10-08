#include <stdio.h>

int main(void) {
    FILE * fp = fopen("mystory.txt", "r");
    char str[100];

    if (fp == NULL) {
        puts("파일 열기 실패");
        return -1;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}