#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 사분면 고르기
	// 1. x좌표, y좌표 입력받기
	int x, y;
	scanf("%d %d", &x, &y);

	// 2. 어느 사분면에 있는지 확인, 결과 출력
	// 1사분면(+, +) / 2사분면(-, +) / 3사분면(-, -) / 4사분면(+, -)
	if (x > 0 && y > 0) {		// 1사분면
		printf("1");
	}
	else if (x < 0 && y > 0) {// 2사분면
		printf("2");
	}
	else if (x < 0 && y < 0) {	// 3사분면
		printf("3");
	}
	else {	
		printf("4");
	}
}