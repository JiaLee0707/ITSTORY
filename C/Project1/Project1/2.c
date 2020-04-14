#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int money, won = 50000, n[4] = { 0 };
    printf("금액을 입력(천원단위까지 입력) : ");
    while (1) {
        scanf("%d", &money);
        if (money >= 1000) break;
    }

    for (int i = 0; i < sizeof(n) / sizeof(int); i++) {
        if (money >= won) {
            n[i] = money / won;
            money -= n[i] * won;
        }
        printf("%d원권 %d개\n", won, n[i]);
        if (i % 2 == 0) won /= 5;
        else won /= 2;
    }
}