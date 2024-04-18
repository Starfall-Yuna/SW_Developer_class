#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// if -else if -else문
	// (else if, else문 사용하려면, if문 생략X)
	// 
	// if :: "만약에~"
	// else if :: "위 조건문을 만족하지 못하고, 만약에~ 한다면,"
	// else :: "위 조건문들을 모두 만족하지 못한다면,"

	// 예제 :: 돈을 입력받고, 커피 또는 빵 구매여부 입력받고
	//		결과를 출력하기

	// 1. 돈을 입력받기 (money)
	int money;
	printf("돈을 넣어주세요. ");
	scanf("%d", &money);

	// 2. 커피(2500원) 구매 여부 입력받기 (0 또는 1 입력)
	int coffee;
	printf("커피를 구매하시겠습니까?(0 또는 1 입력) ");
	scanf("%d", &coffee);
	if (coffee == 1) {			// 커피 구매를 희망할 때
		if (money >= 2500) {		// 돈이 충분하면
			printf("커피가 나왔습니다.\n");
			money -= 2500;
		}
		else {
			printf("커피를 구매하기에 돈이 부족합니다.\n");
		}
	}

	// 3. 빵(1000원) 구매 여부 입력받기 (0 또는 1 입력)
	int bread;
	printf("빵을 구매하시겠습니까?(0 또는 1 입력) ");
	scanf("%d", &bread);
	//	커피만 살 수도 있고, 빵만 살 수도 있고, 둘다 살 수도 있고
	if (bread == 1) {		// 빵 구매를 희망할 때
		if (money >= 1000) {	// 돈이 충분한지 확인
			money -= 1000;
			printf("빵이 나왔습니다.\n");
		}
		else {
			printf("빵을 구매하기에 돈이 부족합니다.\n");
		}
	}

	printf("프로그램을 종료합니다.\n");
}