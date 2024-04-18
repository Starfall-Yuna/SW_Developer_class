#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 문제 :: n을 입력받고, n개의 숫자를 입력받아라.
	// n개의 숫자들 중 가장 큰 숫자(최댓값)를 정답으로 출력하라.
	// (이때, n개의 숫자들은 모두 자연수(1 ~ )이다.)

	// 1. n 입력받기
	int n;
	scanf("%d", &n);

	// 2. n개의 숫자를 입력받아라.	-> scanf()를 n번 수행하라.
	int max = 0;		// 정답 저장
	int t = 0;
	while (t < n) {
		int num;
		scanf("%d", &num);

		if (max < num) {
			max = num;
		}

		t++;
	}
	printf("%d", max);
}