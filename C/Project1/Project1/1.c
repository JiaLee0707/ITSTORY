#define _CRT_SECURE_NO_WARNINGS    //��ũ�� ����(scanf ���)
#include <stdio.h>                 //��ó����(����Լ� ���)

int main(void) {
	int n = 0, max = 0, min = 100;    //n �Է¹��� ������ ������ ���� 
									  //max, min �ְ�, ���������� ������ ���� 
	int score[5] = { 0 };             //�����뺰 �л����� �� �迭����
	char m[][10] = { "90�� �̻�", "80�� ��", "70�� ��", "60�� ��", "60�� �̸�" };//����� ���Ͽ� ������ ����

	printf("���� �Է� : ");    //���

	while (1) {    //����ڰ� ���ϴ� ��ŭ ������ �Է¹ޱ� ���� �ݺ�
		scanf("%d", &n);    //���� n�� ���� �Է�
		if (n < 0) { break; }    //���� n�� 0���� ������ break;
		switch (n / 10) {        //n�� �Է¹ް� n�� 10���� ���� ����
		case 10: case 9: score[0]++; break;    //10 �Ǵ� 9�̸� score[0]�� 1 ���� //90�� �̻�
		case 8: score[1]++; break;               //8�̸� score[0]�� 1 ����    //80�� ��
		case 7: score[2]++; break;               //7�̸� score[0]�� 1 ����    //70�� ��
		case 6: score[3]++; break;               //6�̸� score[0]�� 1 ����    //60�� ��
		default: score[4]++; break;              //�� �̿��� ���̸� score[0]�� 1 ����    //60�� �̸�
		}

		if (n > max) { max = n; };    //���� n�� max���� ũ�� max�� n ����
		if (n < min) { min = n; }     //���� n�� min���� ������ min�� n ����
	}

	for (int i = 0; i < sizeof(score) / sizeof(int); i++) { //sizeof(score) : int�� 4bytes * score �迭�� �� ���� 5
		//ũ�� 20   // 20 / 4 == 5     //5�� �ݺ�
		printf("%s : ", m[i]);    //���ڷ� �����ص� �迭�Լ��� ���� ������ ���
		for (int j = 0; j < score[i]; j++) {    //score[i] : �����뺰 �л�����ŭ �ݺ�
			printf("*");    //�л�����ŭ '*' ���
		}
		printf("\n");    //�ٹٲ�
	}
	printf("�ְ����� : %d\n", max);    //�ְ����� ���
	printf("�������� : %d\n", min);    //�������� ���
}