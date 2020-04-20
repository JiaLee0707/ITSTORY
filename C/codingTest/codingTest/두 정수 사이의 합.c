#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int temp;

    if (a >= b) {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        answer += i;
    }

    return answer;
}
int main(void) {
    int a, b;


    while (true) {
        printf("두개의 정수를 입력하세요 : ");
        scanf("%d %d", &a, &b);
        if ((a >= -10000000 && a <= 10000000) && (b >= -10000000 && b <= 10000000)) {
            break;
        }
    }
    
    printf("두 정수 사이의 합 : %lld", solution(a, b));
}