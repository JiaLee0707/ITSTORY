#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int binary_change(int n) {
    int num, m = 0, i = 0;
    while (n > 0) {
        num = n % 8;
        n /= 8;
        m = m + (num * (int)pow(2, i));
        i++;
    }
    return m;
}

int main() {
    int n;
    printf("2진수 입력(8자리) : ");
    scanf("%o", &n);

    printf("10진수 : %d\n", binary_change(n));
}