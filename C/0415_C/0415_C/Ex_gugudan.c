#include <stdio.h>

int main() {
	// 조건1) 결과값을 저장할 새로운 이차원 배열을 생성.
	int gugudan[10][10] = { 0 };	// 10행 10열 배열 생성 (0~9행, 0~9열)

	// 조건2) 연산이 실행될 때 결과값들을 저장.	-> 2중 반복문으로 배열 접근
	// j*i=결과값 => 2X1=2  3X1=3  4X1=4  5X1=5  6X1=6  7X1=7  8X1=8  9X1=9
	for (int i = 1; i <= 9; i++) {		
		// 제어변수 i (바깥쪽 반복문 -> 한 행에서 값이 변하지 않음)
		for (int j = 2; j <= 9; j++) {	
			// 제어변수 j (안쪽 반복문 -> 같은 행에서도 값이 변하고 있음)
			gugudan[j][i] = j * i;
		}
	}

	// 조건3) 이차원 배열에 저장된 결과값들을 아래의 형식으로 출력.
	for (int i = 1; i <= 9; i++) {
		for (int j = 2; j <= 9; j++) {
			printf("%dX%d=%d\t", j, i, gugudan[j][i]);
		}
		printf("\n");
	}
}