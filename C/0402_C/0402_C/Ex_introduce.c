#include <stdio.h>

int main() {
	// 변수 생성 및 값 설정 -> "초기화"
	// 변수 초기화 :: [자료형] [변수이름] = [값];
	int age = 26;
	double height = 171.1;
	char blood = 'A';

	// 위에서 받은 값을, 정해진 형식대로 출력하기
	printf("안녕하십니까, 이유나입니다.\n");
	printf("나이 :: %d\n", age);
	printf("키 :: %.1lf(cm)\n", height);
	printf("혈액형 :: %c형\n", blood);
	printf("잘 부탁드립니다:)\n");
}