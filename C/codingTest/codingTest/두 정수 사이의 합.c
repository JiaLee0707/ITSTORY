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
        printf("�ΰ��� ������ �Է��ϼ��� : ");
        scanf("%d %d", &a, &b);
        if ((a >= -10000000 && a <= 10000000) && (b >= -10000000 && b <= 10000000)) {
            break;
        }
    }
    
    printf("�� ���� ������ �� : %lld", solution(a, b));
}