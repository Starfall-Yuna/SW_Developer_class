#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 1. 2개의 숫자를 입력받고
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	// (조건식) ? (참일 때 수행할 명령문) : (거짓일 때 수행할 명령문)

	// 2개 값을 비교하여, 같은지 다른지 결과 출력
	// 1) bool 타입 변수로 참/거짓 여부 판별 -> 이에 따라 결과 출력
	bool tf = (num1 == num2);
	(tf == true) ?
		printf("2개 숫자는 같습니다.\n") : printf("2개 숫자는 다릅니다.\n");

	// 2) 즉시 조건식을 대입하여 참/거짓 여부 판별
	(num1 == num2) ?
		printf("2개 숫자는 같습니다.\n") : printf("2개 숫자는 다릅니다.\n");
}