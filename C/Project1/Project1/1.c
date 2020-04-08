#define _CRT_SECURE_NO_WARNINGS    //매크로 정의(scanf 사용)
#include <stdio.h>                 //전처리기(출력함수 사용)

int main(void) {
	int n = 0, max = 0, min = 100;    //n 입력받은 점수를 저장할 변수 
									  //max, min 최고, 최저점수를 저장할 변수 
	int score[5] = { 0 };             //점수대별 학생수를 셀 배열변수
	char m[][10] = { "90점 이상", "80점 대", "70점 대", "60점 대", "60점 미만" };//출력을 위하여 변수로 지정

	printf("점수 입력 : ");    //출력

	while (1) {    //사용자가 원하는 만큼 점수를 입력받기 위해 반복
		scanf("%d", &n);    //변수 n에 점수 입력
		if (n < 0) { break; }    //만약 n이 0보다 작으면 break;
		switch (n / 10) {        //n을 입력받고 n을 10으로 나눈 수가
		case 10: case 9: score[0]++; break;    //10 또는 9이면 score[0]을 1 증가 //90점 이상
		case 8: score[1]++; break;               //8이면 score[0]을 1 증가    //80점 대
		case 7: score[2]++; break;               //7이면 score[0]을 1 증가    //70점 대
		case 6: score[3]++; break;               //6이면 score[0]을 1 증가    //60점 대
		default: score[4]++; break;              //그 이외의 수이면 score[0]을 1 증가    //60점 미만
		}

		if (n > max) { max = n; };    //만약 n이 max보다 크면 max에 n 대입
		if (n < min) { min = n; }     //만약 n이 min보다 작으면 min에 n 대입
	}

	for (int i = 0; i < sizeof(score) / sizeof(int); i++) { //sizeof(score) : int형 4bytes * score 배열의 방 개수 5
		//크기 20   // 20 / 4 == 5     //5번 반복
		printf("%s : ", m[i]);    //문자로 지정해둔 배열함수를 통해 점수대 출력
		for (int j = 0; j < score[i]; j++) {    //score[i] : 점수대별 학생수만큼 반복
			printf("*");    //학생수만큼 '*' 출력
		}
		printf("\n");    //줄바꿈
	}
	printf("최고점수 : %d\n", max);    //최고점수 출력
	printf("최저점수 : %d\n", min);    //최저점수 출력
}