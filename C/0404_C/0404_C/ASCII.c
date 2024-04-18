#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 아스키코드 :: 컴퓨터가 문자 정보를 파악할 수 있도록
	//		문자 정보-특정 숫자를 일대일대응시킨 코드
	char alpha;
	scanf("%c", &alpha);

	// 'A' :: 65, 'a' :: 97, '0' :: 48
	printf("문자로 표현 :: %c\n", alpha);
	printf("숫자로 표현 :: %d\n", alpha);
}