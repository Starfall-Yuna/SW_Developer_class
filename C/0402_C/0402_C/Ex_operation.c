#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 연산자 :: "연산 기호"
	// 대입연산자(1) :: = 
	// 산술연산자(5) :: +, -, *
	//		/(나누기 :: 몫 반환), %(나누기 :: 나머지 반환)

	// 1. 2개의 숫자를 입력받고
	int a, b;
	scanf("%d %d", &a, &b);

	// 2. 5가지 연산 결과를 순차적으로 출력하라 (+, -, *, /, %)
	//printf("%d\n", a + b);
	//printf("%d\n", a - b);
	//printf("%d\n", a * b);
	//printf("%d\n", a / b);
	//printf("%d\n", a % b);

	printf("%d\n%d\n%d\n%d\n%d", a + b, a - b, a * b, a / b, a % b);
}