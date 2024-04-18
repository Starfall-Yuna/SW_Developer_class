#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 예제1 :: 값(1~3)을 입력받고, 각 경우에 따라 특정 값을 출력하라.

	// 1. 값 입력받기
	int num;
	printf("1부터 3까지의 숫자 중 값을 입력하시오. ");
	scanf("%d", &num);

	// 2. 각 경우에 따라, 특정 값 출력
	//		1) 입력값이 1인 경우
	//		2) 입력값이 2인 경우
	//		3) 입력값이 3인 경우
	//		4) 1~3 이외의 입력값인 경우 (else)

	//if (num == 1) {
	//	printf("가위ㅇㅅㅇ\n");
	//}
	//else if (num == 2) {
	//	printf("바위ㅎㅅㅎ\n");
	//}
	//else if (num == 3) {
	//	printf("보ㅋㅅㅋ\n");
	//}
	//else {
	//	printf("다시 입력하세요-");
	//}

	//switch (변수) {
	//case 값1:		// 변수의 값이 값1일 "경우",
	//	변수 == 값1일 때, 수행할 명령문;
	//case 값2:		// 변수의 값이 값2일 "경우",
	//	변수 == 값2일 때, 수행할 명령문;
	//...
	//default:		// else 역할
	//	위 경우가 모두 아닌 경우, 수행할 명령문;
	//}

	// break :: "강제 중단" -> 현재 속해있는 {} 쌍을 탈출
	switch (num) {
	case 1:		// num == 1이라면,
		printf("가위ㅇㅅㅇ\n");
		break;
	case 2:		// num == 2이라면,
		printf("바위ㅎㅅㅎ\n");
		break;
	case 3:		// num == 3이라면,
		printf("보ㅋㅅㅋ\n");
		break;
	default:	// else
		printf("다시 입력하세요-");
	}
	// break문 만나면 이쪽으로 이동
}