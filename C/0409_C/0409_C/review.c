#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 조건문 :: if-else if-else문, switch문
	// 반복문 :: while문

	// 예제 :: 게임 캐릭터의 동작을 보여주는 프로그램 만들기
	// 숫자 n을 입력하고, n만큼의 동작을 보여주는 식으로 진행

	// 1. 숫자 n 입력받기 (캐릭터가 수행할 동작의 개수)
	int n;
	printf("캐릭터의 동작 개수를 입력하시오. ");
	scanf("%d", &n);

	// 2. n개의 명령문 묶음을 수행하기 위해 구성
	int t = 1;		
	while (t <= n) {
		// 반복해서 수행할 명령문을 나열하는 공간
		printf("< 아래 번호 중 하나를 입력하시오 >\n");
		printf("1. 걷는다.\n");
		printf("2. 먹는다.\n");
		printf("3. 뛴다.\n");
		
		// 게임 캐릭터의 동작을 입력받기
		int command;
		scanf("%d", &command);		// command 예상값 :: 1, 2, 3

		// 사용자의 입력에 따라, 캐릭터의 동작을 콘솔상에 출력하기
		switch (command) {
		case 1:
			printf("\n플레이어가 걷기를(을) 수행합니다.\n\n");
			break;
		case 2:
			printf("\n플레이어가 먹기를(을) 수행합니다.\n\n");
			break;
		case 3:
			printf("\n플레이어가 뛰기를(을) 수행합니다.\n\n");
		}
		// default 구문은 else문과 비슷 -> 없어도 상관없음

		t++;		// 이게 없으면 t값이 유지되면서, 무한으로 반복이 이루어짐
	}

}