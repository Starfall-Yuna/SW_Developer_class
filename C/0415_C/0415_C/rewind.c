#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// 출력과 입력 :: printf(), scanf()
	// 문자, 문자열 입력 :: getchar(char), gets(char[])		-> 설명X

	// 버퍼 :: 입력문을 통해 입력받은 값들을, 임시로 저장하는 공간
	//		"임시저장"이기 때문에 입력이 끝남과 동시에 소멸됨

	// %c 쪽에 공백값('\0')이나 줄바꿈값('\n')이 들어가는 경우 발생
	//	=> 값들을 구분하려다가, 입력 충돌이 발생할 수도 있다
	//	=> rewind(stdin) :: 버퍼를 비워줌, 입력 충돌 방지

	int num;
	char ch, c;
	scanf("%d", &num);		// 버퍼에 int형 입력	-> num으로 이동
	rewind(stdin);		// '\n'이 있는 버퍼 비워줌
	scanf("%c", &ch);		// char형 입력받고, 원활하게 ch로 이동됨
	rewind(stdin);
	scanf("%c", &c);
	printf("%d %c %c", num, ch, c);
}