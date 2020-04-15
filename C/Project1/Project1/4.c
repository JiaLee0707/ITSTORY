#include <Stdio.h>
#include <stdlib.h>
#include <string.h>

char* string(char* s) {
	int size = (int)strlen(s);
	char* cc = (char*)malloc(size);
	//memset(cc, 0, sizeof(char) * size);	// malloc 초기화

	for (int i = 0; i < size; i++) {
		*(cc + i) = *(s + size - 1 - i);
	}
	cc[size] = '\0';
		
	return cc;
}

int main(void) {
	char c[100];
	printf("영문자 입력 : ");
	gets_s(c, 100);

	printf("변환된 문자 : %s\n", string(c));
}