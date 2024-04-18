#include <stdio.h>

int main() {
	// (조건식) ? (참일 때 수행할 명령문) : (거짓일 때 수행할 명령문)
	// (num1 == num2) ?
	//	printf("2개 숫자는 같습니다.\n") : printf("2개 숫자는 다릅니다.\n");
	
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	//if(조건식) {
	//	조건식이 성립할 때 수행할 명령문 나열
	//}
	//else {
	//	위 조건문이 성립되지 않을 때 수행할 명령문 나열
	//}
	if (num1 == num2) {
		// "num1 == num2가 참일 때, 수행할 명령문 나열"
		printf("2개 숫자는 같습니다.\n");
	}
	else {
		printf("2개 숫자는 다릅니다.\n");
	}
}