#include <Stdio.h>
#include <stdlib.h>
#include <string.h>

char* string(char* s) {
	int size = (int)strlen(s);
	char* cc = (char*)malloc(size);
	//memset(cc, 0, sizeof(char) * size);	// malloc �ʱ�ȭ

	for (int i = 0; i < size; i++) {
		*(cc + i) = *(s + size - 1 - i);
	}
	cc[size] = '\0';
		
	return cc;
}

int main(void) {
	char c[100];
	printf("������ �Է� : ");
	gets_s(c, 100);

	printf("��ȯ�� ���� : %s\n", string(c));
}