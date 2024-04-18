#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 배열 :: 하나의 이름으로 여러 개의 값을 넣을 수 있는 공간

	// 예제 :: 5명 학생의 성적을 입력받고
	//		평균 이상인지 아닌지를 출력하는 프로그램
	//		5명의 평균을 먼저 구하고 -> 5명 성적에 하나씩 접근

	// 배열 선언 :: (자료형) (배열이름)[배열의 크기];
	// 배열 번호는 반드시 0번부터 시작함

	// 배열 초기화 :: (자료형) (배열이름)[배열의 크기] = {값1, 값2, ... 값n}
	int score[5] = { 0 };	// 0번 ~ 4번

	// 1. 5명의 학생 성적 입력
	printf("5명 학생의 점수를 순차적으로 입력해주세요. ");
	for (int i = 0; i < 5; i++) {	// i :: 0부터 4까지 움직임
		// 변수 불러오기 :: (변수이름)
		// 배열값 불러오기 :: (배열이름)[배열번호]
		//printf("%d번째 score 값 :: %d\n", i, score[i]);

		scanf("%d", &score[i]);
	}

	// 2. 5명의 평균 구하기
	int sum = 0;	// (평균을 구하기 위한) 성적 총합 저장
	for (int i = 0; i < 5; i++) {	// i :: 0부터 4까지 움직임
		sum += score[i];	// 배열값들 순차적으로 sum에 더해주기
		//printf("현재 sum값 :: %d\n", sum);
	}
	double average = sum / 5.0;
	printf("평균 :: %.1f\n", average);

	// 3. 각 학생 점수 - 평균 비교 수행
	for (int i = 0; i < 5; i++) {
		// 평균 이상, 평균 미달
		if (score[i] >= average) {		// 해당 학생 점수가 평균 이상인 경우
			printf("%d번째 학생은 %d점으로, 평균 이상입니다.\n", i + 1, score[i]);
		}
		else {			// 해당 학생 점수가 평균 미달인 경우
			printf("%d번째 학생은 %d점으로, 평균 미달입니다.\n", i + 1, score[i]);
		}
	}
}