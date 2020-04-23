#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool solution(const char* s) {
    bool answer = true;
    int size = (int)strlen(s);

    if (!(size == 4 || size == 6)) {
        answer = false;
        return answer;
    }
    else {
        for (int i = 0; i < (int)strlen(s); i++) {
            //if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            if (!(s[i] >= '0' && s[i] <= '9')) {
                answer = false;
                break;
            }
        }
    }

    return answer;
}
int main(void) {
    char s[8];
    printf("문자열을 입력하세요 : ");
    scanf("%s", s);

    if (solution(s)) {
        printf("%s는 숫자로만 이루어져 있습니다.\n", s);
    }
    else {
        printf("%s는 숫자로만 이루어져 있지 않습니다.\n", s);
    }
}