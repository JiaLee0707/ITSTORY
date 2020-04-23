#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {

    int size = sizeof(s);

    char *answer = (char*)malloc(2);
    memset(answer, 0, sizeof(int)*2);

    if (size % 2 == 0) {
        *answer = s[size / 2 - 1];
        *(answer+1) = s[size / 2];
    }
    else {
        *answer = s[size / 2];
    }
    // *(answer+2) = '\0';


    return answer;
    free(answer);
}

int main(void) {
    char s[100];
    printf("문자열을 입력하세요 : ");
    scanf("%s", s);

    //solution(s);

    printf("%s\n", solution(s));
}