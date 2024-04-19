#include<stdio.h>

// 자료형 :: int, double, char와 같이 정보의 종류
// 구조체 :: 위 자료형을 혼합해서, 타입을 별도로 생성하는 것
//		다양한 자료형의 여러 변수의 집합 
	// 붕어빵(변수)을 만들어내는 "틀"을 정의한다고 보면 된다

// 예제 :: 사람(이름, 전화번호, 나이, 혈액형) 구조체 정의
//typedef => type detintion(코드를 작성하는 입장에서 타입을 별도 정의하는 키워드) 
typedef struct {
	// Person 멤버 :: 이름, 전화번호, 나이, 혈액형
	// 멤버 :: 구조체 안의 변수 하나하나
	char name[20];
	char tel[20];
	int age;
	char blood;
} Person;

int main() {
	// * 아래처럼 여러개의 변수/배열을 한 묶으로 만들고 싶을 때 -> 구조체 사용 
	// user에 대해 필요한 내용
	//char user_name[20];
	//int user_age;
	//char user_tel[20];
	//char user_num[20];

	// admin에 대해 필요한 내용
	//char admin_name[10];
	//char admin_num[20];
	//char admin_id[20];

	//me라는 이름으로 person 타입의 변수 선언
	// 구조체 상, 변수/배열 선언한 순서대로 값을 넣어줘야 함
	//			{name		  ,tel		     ,age, blood}
	Person me = { "jeonsiyu", "010-1234-5678",27, 'O' };

	// 구조체 멤버 접근 :: (구조체변수),(멤버명)
	printf("이름 :: %s\n" , me.name);
	printf("전화번호 :: %s\n",me.tel);
	printf("나이 :: %d\n", me.age);
	printf("혈액형 :: %c\n", me.blood);


	// 구조체는 = 타입(자료형) -> 변수나 배열처럼 사용할수 없음
	// int = 1; -> x
	// person = { "jeonsiyu","010-1234-5678",27,'O' }; -> x
	

}