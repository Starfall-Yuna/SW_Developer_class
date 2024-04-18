#include <stdio.h>

// a부터 b까지 곱하는 함수 만들고
// a*...*b=결과 출력하고 반환값 주는 함수 만들기(a < b)
int multi(int a, int b) {	// () :: 매개변수 "선언"하는 공간
	int result = 1;
	for (int i = a; i <= b; i++) {
		result *= i;
		printf("%d", i);
		if (i != b) {
			printf("x");
		}
	}
	printf("\n");

	return result;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	// return 구문을 함수에 명시하지 않으면 ->
	// 함수 호출한 공간에 대체할 값이 없다.
	printf("Total = %d", multi(a, b));
}