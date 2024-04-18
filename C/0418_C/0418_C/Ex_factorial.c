#include <stdio.h>

// 문제 :: 입력값 num에 대한 팩토리얼값 반환하는 함수를 구현
// 5! = 5*4*3*2*1
// n! = n*(n-1)*...*1;
int fact(int n) {
	printf("%d 탐색 중\n", n);
	if (n == 1 || n == 0) {
		return 1;
	}
	return n * fact(n - 1);

	//	5*fact(4) = 5*(4*fact(3)) = 5*4*(3*fact(2))
	//		= 5*4*3*(2*fact(1)) = 5*4*3*2*1
}

int main() {
	int num;
	scanf("%d", &num);

	int result = fact(num);	
	printf("%d", result);
}