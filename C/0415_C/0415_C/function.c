#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수(function) :: "기능", 여러 명령문을 하나로 묶어둔 것
// 함수 선언 구문
//	반환형(자료형) 함수이름() {
//		함수 호출 시, 수행할 명령문;
//	}

// 반환형 :: return구문을 통해서 뱉어낼 값의 타입
// "반환하다"(return) != "출력하다"(printf)
// void :: "아무것도 없다"
// NULL :: "없는", "값이 존재하지 않는"  !=  0, false
// int num = NULL;		// 값을 지정하지 않음

// 반환형이 void이면, return 구문 작성X
void print() {
	// print() 함수를 main에서 호출하지 않으면, 실행이 안됨
	printf("프로그램을 실행합니다.\n");
}
int Return_One() {	
	return 1;		// return :: "반환하다"
		// 1을 뱉어낸다. (int형)
}

// main 함수
int main() {
	// 함수 호출 :: 함수 이름();
	print();	// print() 함수 호출

	printf("Return_One() 함수 반환값 :: %d\n", Return_One());

	// return 0;	-> "0을 반환한다."
	//		-> "프로그램을 정상적으로 종료한다."
}