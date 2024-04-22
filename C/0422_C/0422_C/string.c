#include <stdio.h>
#include <string.h>
// 라이브러리 :: "도서관", 명령문들을 모아둔 공간

// 문자열(string, char[]) 처리 함수
int main() {
	// strlen(char[])	:: 문자열의 길이를 처리 ('\0'을 제외한 실질적인 길이 제공)
	char s[] = "string type";	// 12글자(11글자 + '\0')의 공간 자동 배정
	printf("문자열 s의 내용 :: %s\n", s);
	printf("문자열 s의 길이 :: %d\n\n", strlen(s));		// strlen("string type")

	// strcat(char[], char[]) :: 2개 문자열 연결 
	// strncat(char[], char[], int) :: 2개 문자열 연결
	char h[10] = "Hello";		// h :: 6개
	char b[] = "HiBye";		// b :: 4개
	// strcat(h, b);		// h + b의 결과값은 h에 저장됨
	strncat(h, b, 2);	// "h + (b배열 중 2글자만)의 결과값을 h에 저장함"
	printf("h의 현재값 :: %s\n", h);
	printf("b의 현재값 :: %s\n\n", b);

	// strcpy(char[], char[]) :: 문자열 복사, 두번째 값을 첫번째 공간에 복사
	// strncpy(char[], char[], int) :: 문자열 복사
	char copy1[20];		// 빈 배열
	strcpy(copy1, h);	// copy 배열에 h의 값을 복사+붙여넣기
	printf("copy1(h) 복사 결과 :: %s\n", copy1);
	char copy2[] = "Hiiii";
	strncpy(copy2, h, 5);	// h의 5글자만 copy2에 덮어쓰기(복사+붙여넣기)
	printf("copy2 복사 결과 :: %s\n\n", copy2);

	// strcmp(char[], char[]) :: 문자열 비교
	// strncmp(char[], char[], int) :: 문자열 비교
	// +,-값 나오면, "다르다"라는 결과이며
	// 0 값이 나오면, "같다"라는 결과이다. 
	//char str1[] = "Hello";
	//char str2[] = "Hello";
	char str1[] = "HelloWorld";
	char str2[] = "HelloC";
	if (str1[0] == str2[0]) {
		printf("두 문자열의 첫번째 글자는 동일합니다.\n");
	}
	if (str1 == str2) {		// 문자열은 ==이나 !=으로 비교 불가
		printf("두 문자열은 동일합니다.\n");
	}
	if (strcmp(str1, str2) == 0) {		// str1과 str2가 같다면
		printf("%d\n", strcmp(str1, str2));
		printf("두 문자열은 동일합니다.\n");
	}
	else {
		printf("%d\n", strcmp(str1, str2));
		printf("두 문자열은 다릅니다.\n");
	}
	if (strncmp(str1, str2, 5) == 0) {	// str1과 str2의 앞글자 5개가 같다면
		printf("두 문자열의 5개 글자가 같습니다.\n");
	}
}