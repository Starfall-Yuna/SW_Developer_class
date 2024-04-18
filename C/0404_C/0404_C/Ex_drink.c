#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 자판기 프로그램 만들기
	
	// 1. 동전 입력
	int coin;
	printf("돈을 넣어주세요. ");
	scanf("%d", &coin);

	// 2. 음료수 선택지 제시 및 입력받기
	printf("1. 콜라(1000원)\n");
	printf("2. 사이다(1100원)\n");
	printf("3. 포카리 스웨트(1800원)\n");
	printf("4. 레쓰비(800원)\n");
	printf("5. 카페라떼(2500원)\n");
	int drink;
	printf("음료수를 선택해주세요.(1~5 중 선택) ");
	scanf("%d", &drink);

	// 3. 선택한 음료를 구매하기에 돈이 충분한가?
	//   1) coin에 대해, 선택한 음료 가격을 우선적으로 빼본다.
	if (drink == 1) {		// 콜라(1000원) 희망
		coin -= 1000;
	}
	else if (drink == 2) {	// 사이다(1100원) 희망
		coin -= 1100;
	}
	else if (drink == 3) {	// 포카리(1800원) 희망
		coin -= 1800;
	}
	else if (drink == 4) {	// 레쓰비(800원) 희망
		coin -= 800;
	}
	else if (drink == 5) {	// 카페라떼(2500원) 희망
		coin -= 2500;
	}

	//  2) 현재 coin의 값이 음수인지 아닌지를 따져본다.
	if (coin < 0) {		// coin이 음수라면 -> 음료 구매X
		printf("해당 음료를 구매할 수 없습니다. 다시 실행해주십시오.\n");
	}
	else {		// coin이 양수 or 0이라면 -> 음료 구매O
		printf("해당 음료가 제공되었습니다.\n");

		// 사용자의 돈이 남아있는가? (거스름돈이 있는가?)
		if (coin > 0) {		// coin이 양수라면 -> 거스름돈O
			printf("거스름돈은 %d원입니다.\n", coin);
		}
		// coin이 0이라면 -> 거스름돈X
		//		(즉시 실행종료 -> else문 굳이 작성 안해도 됨
	}
}