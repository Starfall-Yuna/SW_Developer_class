#include <stdio.h>

// 매개변수 :: 함수가 호출되기 전에 "미리 전달받는" 값
//	반환형(자료형) 함수이름(매개변수타입1 매개변수명1, ...) {
//		함수 호출 시, 수행할 명령문;
//	}

// 자기소개를 출력하는 함수 구현 :: 이름(char[]), 나이(int), 혈액형(char)
void introduce(char name[], int age, char blood) {
	printf("이름 :: %s\n", name);
	printf("나이 :: %d\n", age);
	printf("혈액형 :: %c\n", blood);
}

int main() {
	// introduce() 함수는 3개의 정보(char[], int, char)를 넣어주고
	// 실행을 해야 정상 실행됨
	introduce("Lee_Yuna", 26, 'A');
}