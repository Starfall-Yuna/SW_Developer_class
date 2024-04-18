#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 입력 :: 콘솔 상에서 값을 넣을 수 있게끔 하는 명령
	//		=> scanf() 사용
	
	// 예제 :: 2개의 숫자를 입력받고,
	//	 이들의 합을 출력
	// 1. 입력값을 저장할 2개 변수 생성
	int a, b;

	// 2. 콘솔상에서 2개 값 입력받기 (a, b에 저장)
	// scanf("[서식지정자]", &[값을 저장할 변수]);
	scanf("%d %d", &a, &b);

	printf("%d", a + b);
}