#include <stdio.h>

// 1~ 100까지 더하는 함수 구현
// 1+2+3+ ... +99+100 메시지 출력 (5050 값을 반환)
//		=> 실행하면, 정해진 시작과 끝(1부터 100)의 합을 구하면 되니
//			매개변수는 별도로 필요해보이지 않는다.
int sum() {
	int result = 0;		// 1부터 100까지 더한 값 저장할 변수
	for (int i = 1; i <= 100; i++) {
		result += i;		// 1부터 100까지 i가 변하면서 result에 덧셈 수행
		
		printf("%d", i);
		if (i != 100) { printf("+"); }
	}
	printf("\n");
	
	return result;
}

int main() {
	printf("Total :: %d\n", sum());
	// sum()을 먼저 실행하고, main의 printf()를 실행하고 있음
	// 1. 서식 지정자에 들어갈 값이 정상인지를 확인하고
	// 2. 정상이라면 printf()가 수행
}