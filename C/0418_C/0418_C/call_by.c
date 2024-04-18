#include <stdio.h>

// 함수에서 값을 받아내는 방식 (매개변수를 통해서 값을 받아내는 방식)
// call by value, call by reference(포인터)

// 함수 구현 :: 2개의 실수 정보를 받고, 덧셈 수행
void add(double a, double b) {	// 2개의 실수 정보를, 매개변수 통해서 받도록 설정
	a += b;		// a = a+b;		a+b의 결과를 a에 저장한다.
}
void plus(double* a, double* b) {
	*a += *b;
}

int main() {
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("현재 num1, num2 값 :: %.1f, %.1f\n", num1, num2);

	// 1. call by value(값) 기법 :: num1, num2의 값만 함수로 전달 (변수 통째로 전달X)
	add(num1, num2);		// 입력값들을 함수로 보내서 실행
				// num1 = 2.5, num2 = 6.8일 때엔, add(2.5, 6.8);으로 실행
		//	(실행한 뒤에는 num1 + num2값으로 대체)
	printf("call by value의 num1 값 :: %.1f\n", num1);

	// 2. call by reference(주소) 기법 :: num1, num2의 주소값을 함수로 전달 (변수 통째로 전달O)
	plus(&num1, &num2);		// 변수의 주소를 함수로 보내서 실행
				// num1 = 2.5, num2 = 6.8이라 가정하여도, add(num1변수 자체, num2 변수 자체); 로 실행
	printf("call by reference의 num1 값 :: %.1f\n", num1);
}