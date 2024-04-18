#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 편집기에서 작성하는 모든 코드가 실행X
// 프로그램을 실행할 때, main 함수에 있는 내용 위주로 실행이 됨

// 함수(function) :: "기능", 명령문의 묶음
void print() {
	printf("덧셈 프로그램을 실행합니다.\n");
}

// main 함수
int main() {
	// 예제 :: 두 숫자 a, b를 입력받고, 두 숫자의 합을 출력하라.
	
	print();	// 함수 불러오기

	int a, b;
	scanf("%d %d", &a, &b);

	printf("%d", a + b);
}