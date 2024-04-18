#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 조건문 :: if - else if - else문 (feat. 아스키코드)
	// ( 아스키코드 :: 사람-컴퓨터 소통을 위해서, 
	//		문자 정보를 특정 숫자와 일대일대응 시킨 약속 )

	// 예제 :: 영문자를 입력받고, 대소문자 반전하여 출력하기
	// 1. 영문자를 입력받기 
	char alphabet;
	printf("영문자를 입력해주세요. ");
	scanf("%c", &alphabet);

	// '0' :: 48
	// 2. 대소문자 반전
	//		1) 대문자('A' :: 65) 입력받는 경우		-> 소문자로 반전
	//		2) 소문자('a' :: 97) 입력받는 경우		-> 대문자로 반전
	//		3) 영문자가 아닌 문자를 입력받는 경우	-> 에러메시지 출력
	if ('A' <= alphabet && alphabet <= 'Z') {	// 65 <= alphabet <= 90
		printf("대문자 -> 소문자 변환 결과 :: %c", alphabet + 32);
		// alphabet + 32의 값이 문자형으로 표현됨
	}
	else if ('a' <= alphabet && alphabet <= 'z') {	// 97 <= alphabet <= 122
		printf("소문자 -> 대문자 변환 결과 :: %c", alphabet - 32);
	}
	else {		// 영문자가 아닌 문자인 경우
		printf("영문자가 아닙니다. 다시 실행해주세요.\n");
	}
}