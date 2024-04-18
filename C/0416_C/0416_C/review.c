#include <stdio.h>

// 함수(function) :: "기능", 여러 명령문들을 묶어놓은 것
// 선언된 함수를 main에서 "사용"
//	반환형 함수이름(매개변수타입1 매개변수명1, ...){
//		함수 호출 시 수행할 명령문들;
//	}

// 반환형이 int인 이유는 :: 함수 결과값이 int일 예정이기 때문
// 
int Sum(int a, int b, int c) {	
	printf("덧셈 프로그램을 수행합니다.\n");
	
	// a, b, c라는 값이 Sum() 함수에는 없으니까
	// 이 때에는 매개변수 설정을 추가로 해주면 됨
	int result = 0;
	for (int i = a; i <= b; i++) {	// i가 a~b까지 순회
		if (i % c != 0) {	// 3에 나누어떨어지지 않을 때
			result += i;
		}
	}

	return result;
}

int main() {
	// 예제 :: int형 입력 3개 받음(a, b, c)
	//	a부터 b까지의 합 (c의 배수는 합에 포함X)
	// (ex) a=2, b=4, c=3	=> 2부터 4까지의 합을 구하되 3의 배수 제외:: 2+4 = 6
	// 입출력은 main에서 수행, 연산은 함수에서 수행

	// 1. 3개 입력
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	// 2. c의 배수를 제외한 a~b까지의 합 구하기 -> 연산을 함수에서
	int result = Sum(a, b, c);

	// 3. 결과값 출력 수행
	printf("결과 :: %d\n", result);
}