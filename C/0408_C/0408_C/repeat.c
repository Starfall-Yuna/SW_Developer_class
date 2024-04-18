#include <stdio.h>

int main() {
	//printf("1\n");
	//printf("2\n");
	//printf("3\n");
	//printf("4\n");
	//printf("5\n");

	// 반복문 :: "지정된 횟수만큼" 동일한 명령문을 "반복"하는 구문
	//		"지정된 횟수만큼" => 특정 조건식에 대한 참/거짓으로 책정
	// for, while, do-while
	// "어느 순간에는 반드시 종료되게끔 설정해야한다."

	//while (조건식) {
	//	조건식을 충족할 때마다 수행할 명령문
	//}
	// 예제 :: 1부터 5까지 출력하는 프로그램
	int num = 1;	// num변수 값을 "변화"시키면서 출력에 활용할 예정
	while (num <= 5) {
		printf("%d\n", num);		// 현재 num값 출력
		num++;		// num에 1을 추가
	}
	// num이 증가를 연이어 하다가, 6이 되는 순간 빠져나올 것

	// 알파벳 A~Z까지 출력
	char alpha = 'A';
	while (alpha <= 'Z') {
		printf("%c ", alpha);
		alpha++;
	}

}