//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* string(char* s) {
	int size = (int)strlen(s);	// �Է¹��� ���ڿ� ����
	char* cc = (char*)malloc(size);	// ���ڿ� �Ųٷ� ���� ���� �����Ҵ�
	//memset(cc, 0, sizeof(char) * size);	// malloc �ʱ�ȭ

	// for���� ����
	// �Է¹��� ���ڿ� ������ ������ ����
	for (int i = 0; i < size; i++) {
		*(cc + i) = *(s + size - 1 - i);
	}
	cc[size] = '\0';	// �����Ⱚ�� ��µ��� �ʵ��� ���ڿ� ���� NULL ����
		
	return cc;
}

int main(void) {
	char c[100];
	printf("������ �Է� : ");
	//scanf("%s", c);	// ������ �Է¹��� ����
	gets_s(c, 100);

	printf("��ȯ�� ���� : %s\n", string(c));
}