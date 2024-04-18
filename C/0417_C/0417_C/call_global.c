#include <stdio.h>
// 변수가 생성되는 시점, 변수가 소멸되는 시점을 파악할 필요

// 전역 변수(global) :: 프로그램이 시작할 때 생성, 프로그램이 종료할 때 소멸 (공유 폴더로 비유)
//	어떤 함수에서든 값을 공유해서 사용할 수 있는 변수

int global = 3;
int var;
int array[10];	// array 배열을 생성할 때, 초기값으로 쓰레기값이 들어갔다. (X)
void plus_global() {
	global++;
}
void print() {
	// 전역변수는 별도의 값 설정이 없다면 자동으로 0 값을 가진다. 
	printf("var 값 :: %d\n", var);
	for (int i = 0; i < 10; i++) {
		printf("array[%d] 값 :: %d\n", i, array[i]);
	}
}

int main() {
	// 지역 변수(local) :: "특정 지역에서만" 사용할 수 있는 변수 (각각의 컴퓨터로 비유)
	//	"특정 지역" 구간 :: {}쌍 안
	// 지역 변수는 "선언문 이후"부터 "선언된 공간이 끝나는 구간 }"까지 살아있음

	// loca++;		// loca 선언되기 전에 사용하려함 -> 에러
	int loca = 0;	// main() 함수 안에 선언 -> main() 안에서만 사용O
	if (loca == 0) {
		int num = 5;	// num 변수 생성
		num++;
	}	// num 변수 소멸

	// 전역 변수 사용 예제
	printf("전역 변수의 현재 값 :: %d\n", global);
	printf("++global 수행 결과 :: %d\n", ++global);
	plus_global();
	printf("plus_global() 수행 결과 :: %d\n\n", global);

	print();

}// } 만남과 동시과, loca 변수 소멸