#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 2개의 숫자(n, m) 입력받고, 
	// n부터 m까지의 숫자들 중 3의 배수만 순차적으로 출력하라.

	// 1. 2개 숫자 입력(n, m)
	int n, m;
	scanf("%d %d", &n, &m);

	// 2. n부터 m까지의 숫자들 순차적 탐색
	// while문
	//int i = n;
	//while (i <= m) {
	//	// 3의 배수만 출력
	//	if (i % 3 == 0) {	// 3으로 나누어떨어질 때(나머지가 0일 때)
	//		printf("%d\n", i);
	//	}

	//	i++;
	//}

	// for문
	for (int i = n; i <= m; i++) {
		// 3의 배수만 출력
		if (i % 3 == 0) {	// 3으로 나누어떨어질 때(나머지가 0일 때)
			printf("%d\n", i);
		}
	}
}