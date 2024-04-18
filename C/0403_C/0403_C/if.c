#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 조건문 :: "조건식의 결과에 따라" 수행할 명령문을 달리할 때 사용
	// if문 - else문 (순서 역행X)

	// 예제 :: 시험 점수를 입력받고, Pass인지 Fail인지 출력
	//		(60점 이상이면 Pass)

	// 1. 시험 점수 입력
	int score;
	scanf("%d", &score);

	// 2. Pass인지 Fail인지 결과 출력 => 60점 이상인지 아닌지
	//if(조건식) {
	//	조건식이 성립할 때 수행할 명령문 나열
	//}
	//else {
	//	위 조건문이 성립되지 않을 때 수행할 명령문 나여
	//}
	if (score >= 60) {		// Pass인 경우 (점수가 60 이상일 때)
		printf("Pass입니다.\n");
	}
	else {		// Fail인 경우 (점수가 60 아래일 때)
						// 위 조건문을 만족하지 않다면
		printf("Fail입니다.\n");
	}
}