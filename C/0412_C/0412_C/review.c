#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 변수 :: 하나의 이름으로 하나의 값을 저장하는 공간
	// 배열 :: 하나의 이름으로 여러 값을 저장할 수 있는 공간

	// 백준 10871번 문제 (X보다 작은 수)
	// 입력 :: 숫자의 개수 n, 임의의 수 x, n개의 숫자들
	//		=> n개의 숫자들 중 xㅂ다 작은 수를 순차적 출력

	// 1. 입력 받기
	int n, x;
	scanf("%d %d", &n, &x);

	// 변수 선언 :: (자료형) (변수이름);
	// 배열 선언 :: (자료형) (배열이름)[배열의 크기];
	// "배열 번호가 0번부터 시작한다."
	// {값1, 값2, ...} 를 통해서 배열 초기화 가능 
	int number[10001] = { 0 };
	for (int i = 0; i < n; i++) {	// i :: 0 ~ n-1
		// 배열값 호출 :: (배열이름)[배열번호];
		//	배열 번호 :: "배열의 몇번째 공간에 있는 값을 불러오는가"
		scanf("%d", &number[i]);
	}

	// 2. x와 배열값을 하나씩 비교하면서, 출력 수행
	for (int i = 0; i < n; i++) {	// i :: 0 ~ n-1
		// 출력 수행 조건 :: 현재 탐색 중인 배열값이 x보다 작은 경우
		if (number[i] < x) {
			printf("%d ", number[i]);
		}
	}
}