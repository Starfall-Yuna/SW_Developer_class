#include <stdio.h>

// 오버로딩 :: "함수 중복 선언"
// 함수 선언 :: int형 덧셈 수행 결과값을 return하는 함수 3개
int plus() {		// 매개변수가 없는걸로 (정보 요청X)
	return 1 + 1;		// 2 반환
}
int plus(int n1) {		// 매개변수가 1개 있음 (1개의 정보 요청)
	return n1 + 1;		// n1+1 반환
}
int plus(int n1, int n2) {	// 매개변수가 2개 있음 (2개의 정보 요청)
	return n1 + n2;		// n1+n2 반환
}

int main() {
	// 2개의 변수가 있는데, 2개 변수의 이름을 동일하게 설정할 수 있다
	//		=> 변수에 대한 중복 선언 (X)
	//int a = 5;
	//int a = 10;
	//printf("%d", &a);

	printf("덧셈 결과 :: %d", plus());		// 첫번째 함수 사용
	printf("덧셈 결과 :: %d", plus(10));	// 결과 :: 11, 두번째 함수 사용
	printf("덧셈 결과 :: %d", plus(15, 30));	// 결과 :: 45, 세번째 함수 사용
}