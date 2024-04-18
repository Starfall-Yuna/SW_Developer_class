#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 시험 점수를 입력받고, 합격/불합격 여부 결과를 출력하여라.
	// 이때, 점수가 60점 이상일 경우가 합격에 해당된다.

	// 1. 점수 입력받기
	int score;
	printf("점수를 입력하시오. ");
	scanf("%d", &score);

	// 2. 합불 결과 출력하기
	bool tf = score >= 60; 
	switch (tf) {		// score >= 60을 넣어도 상관없음
	case true:
		printf("축하합니다, 합격하셨습니다!\n");
		break;
	case false:
		printf("불합격하셨습니다.\n");
		break;
	}
}