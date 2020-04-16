//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* string(char* s) {
	int size = (int)strlen(s);	// 입력받은 문자열 길이
	char* cc = (char*)malloc(size);	// 문자열 거꾸로 받을 변수 동적할당
	//memset(cc, 0, sizeof(char) * size);	// malloc 초기화

	// for문을 통해
	// 입력받은 문자열 끝부터 변수에 대입
	for (int i = 0; i < size; i++) {
		*(cc + i) = *(s + size - 1 - i);
	}
	cc[size] = '\0';	// 쓰레기값이 출력되지 않도록 문자열 끝에 NULL 대입
		
	return cc;
}

int main(void) {
	char c[100];
	printf("영문자 입력 : ");
	//scanf("%s", c);	// 공백을 입력받지 못함
	gets_s(c, 100);

	printf("변환된 문자 : %s\n", string(c));
}