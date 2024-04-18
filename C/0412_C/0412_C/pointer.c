#include <stdio.h>

int main() {
	// 포인터 :: "point" + "er" = "pointer" (가리키는 것)
	// 포인터 변수 안에는, "가리키고자 하는 것의 주소"를 자신의 값으로 가짐
	// &, * 기호를 주로 사용

	// 일반적인 변수 사용	-> 변수 선언, 값 설정, 변수 초기화
	int num = 5;
	printf("변수 num의 주소 :: %d\n", &num);
	printf("변수 num의 값 :: %d\n\n", num);

	// 포인터 변수 사용		-> 변수 선언, 값 설정, 변수 초기화
	int* ptNum;				// 변수 선언 :: (자료형)* (변수이름); 
	ptNum = &num;			// 값 설정 :: (변수이름) = &(가리킬 변수이름);
	printf("ptNum의 값 :: %d\n", ptNum);		// num의 주소값과 동일
	printf("ptNum 값을 통해 가리킨 변수의 값 :: %d\n", *ptNum);		// num의 값과 동일
}