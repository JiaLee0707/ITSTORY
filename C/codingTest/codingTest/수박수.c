#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    char* answer = (char*)malloc(sizeof(char)*(n*3)+1);
    memset(answer, '\0', (n * 3) + 1);
    //char watermelon[] = "수박";
    char* water = "수";
    char* melon = "박";

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            strcat(answer, water); //watermelon[0]);
            //answer[i] = watermelon[0];
        }
        else {
            //printf("asdf");
            strcat(answer, melon); //watermelon[1]);
            //answer[i] = watermelon[1];
        }
    }
    //answer[n] = '\0';

    return answer;
}
int main(void) {
    int size;
    printf("길이는? ");
    scanf("%d", &size);

    printf("%s\n", solution(size));
}