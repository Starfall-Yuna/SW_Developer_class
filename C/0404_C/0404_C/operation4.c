#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 논리연산자 :: &, &&  /  |, ||  /  !
	
	// 예제 :: 점수를 입력받고, 이에 알맞는 학점을 구하여라.
	// (90~100 ->A / 80~89 ->B / 
	//		70~79 ->C / 60~69 ->D / 0~59 ->F )

	// 1. 점수를 입력받기
	int score;
	printf("점수를 입력하세요.(0~100점 범위)");
	scanf("%d", &score);

	// 2. 입력값이 속하는 범위의 결과값 출력
	// &, && :: "그리고"
	//		2개의 조건식 중 하나라도 거짓이면 false 결과가 나타남
	//		&는 2개의 조건식을 모두 판별
	//		&&는 첫번째 식의 결과값에 따라 두번째 식을 볼수도 있고 안 볼수도 있음
	printf("<<논리연산자 사용>>\n");
	if (90 <= score && score <= 100) {		// 학점이 A인 경우 (90 <= score <= 100)
		// score값 90 이상이고 100 이하일 때
		printf("A입니다.\n");
	}
	if (80 <= score && score < 90) {
		printf("B입니다.\n");
	}
	if (70 <= score && score < 80) {
		printf("C입니다.\n");
	}
	if (60 <= score && score < 70) {
		printf("D입니다.\n");
	}
	if (0 <= score && score < 60) {
		printf("F입니다.\n");
	}

	// 95(A), 85(B), 75(C), 65(D), 5(F)
	printf("<<if-else if-else문 사용>>\n");
	if (90 <= score) {
		printf("A입니다.\n");
	}
	else if (80 <= score) {
		printf("B입니다.\n");
	}
	else if (70 <= score) {
		printf("C입니다.\n");
	}
	else if (60 <= score) {
		printf("D입니다.\n");
	}
	else {
		printf("F입니다.\n");
	}
}