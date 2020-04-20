#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int size = (int)strlen(s);
    char* answer = (char*)malloc(sizeof(char) * size);

    strcpy(answer, s);

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if ((int)answer[j] > (int)answer[i]) {
                char temp = answer[j];
                answer[j] = answer[i];
                answer[i] = temp;
            }
        }
    }
    answer[size] = '\0';

    return answer;
}
int main(void) {
    char s[100];
    printf("내림차순할 문자열을 입력하세요 : ");
    scanf("%s", s);

    printf("내림차순 : %s", solution(s));
}