#include <stdio.h>

// 각 사칙연산에 대한 함수 5개를 구현하기 
// (반환형은 모두 int형으로 설정해두기)
int plus(int n1, int n2) {		// main의 입력값(a,b)을 받을 매개변수 설정
	// 정수형 값을 리턴해줘야 함
	return n1 + n2;	
}
int minus(int n1, int n2) {
	return n1 - n2;
}
int multi(int n1, int n2) {
	return n1 * n2;
}
// "n1을 n2로 나눌 때, n2가 0이면 안 된다."
int divide(int n1, int n2) {
	if (n2 == 0) {
		return -1;		// 여기서 -1을 반환하면, 실행 종료됨
	}
	return n1 / n2;
}
int rest(int n1, int n2) {
	if (n2 == 0) {
		return -1;		// 여기서 -1을 반환하면, 실행 종료됨
	}
	return n1 % n2;
}
// return문을 만나는 즉시 해당 함수 실행 종료

int main() {
	// 1. main에서 2개 숫자를 입력받기
	int a, b;
	scanf("%d %d", &a, &b);

	// 2. 하나의 연산자(+, -, *, /, %) 중 하나 입력받기
	char oper;
	scanf(" %c", &oper);

	// 위 함수를 활용하여, 입력된 연산자에 대한 결과를 main에서 출력하기
	switch (oper) {
	case '+':
		printf("덧셈 결과 :: %d\n", plus(a, b));
		break;
	case '-':
		printf("뺄셈 결과 :: %d\n", minus(a, b));
		break;
	case '*':
		printf("곱셈 결과 :: %d\n", multi(a, b));
		break;
	case '/':
		if (divide(a, b) == -1) {	// return -1; 로 인해서 -1과 값이 동일해지는 경우
			printf("/ 연산 에러 :: 0으로 나눌 수 없습니다.\n");
		}
		else {		// return n1/n2;가 실행된 경우
			printf("몫 나누기 결과 :: %d\n", divide(a, b));
		}
		break;
	case '%':
		if (rest(a, b) == -1) {		// return -1; 로 인해서 -1과 값이 동일해지는 경우
			printf("% 연산 에러 :: 0으로 나눌 수 없습니다.\n");
		}
		else {
			printf("나머지 나누기 결과 :: %d\n", rest(a, b));
		}
		break;
	default:		// 연산자를 제대로 입력하지 않은 경우
		printf("연산자를 잘못 입력하였습니다.\n");
	}
}