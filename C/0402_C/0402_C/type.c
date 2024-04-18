#include <stdio.h>

int main() {
	// 자료형 :: "정보의 유형"
	// 기본적인 자료형은 signed형 -> 음수와 양수 모두 표현O
	// unsigned형 -> 0과 양수만 표현O

	// 정수형 - short, int(대표적), long
	// 표현할 수 있는 숫자의 범위 차이 
	short myShort;
	int myInt;		// -21억 ~ +21억
	unsigned int myUint;	// 0 ~ 42억
	long myLong;

	// 실수형 - float, double(대표적)
	// 정밀도 (소수점 표현 범위)
	// 3.14 / 3.1419....
	float myFloat;			// "%f"
	double myDouble;		// "%lf"
	
	// 문자형 - char
	char myChar;
}