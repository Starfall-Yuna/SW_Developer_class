#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main() {
	// 정보처리기사 필기 응시자의 1~5과목 점수 입력받고
	// 합격/불합격 여부를 출력하여라.

	// 1. 1~5과목 점수 입력
	int score[5];
	printf("정보처리기사 필기 1~5과목 점수를 순차적을 입력해주세요.\n");
	for (int i = 0; i < 5; i++) {	// i: 0 ~ 4
		scanf("%d", &score[i]);		// i번째 score 값 입력
	}
	bool pass = true;

	// 2. 합격/ 불합격 여부 출력 (+ 과락 여부, 총점 통과 여부)
	//	1) 과락 여부 (각 점수에 대해, 40점 이상인지 미만인지 파악)
	for (int i = 0; i < 5; i++) {
		printf("%d과목 :: ", i + 1);	// i+1 :: 1 ~ 5
		if (score[i] >= 40) {	// 40점 이상 -> 통과하는 경우
			printf("통과\n");
		}
		else {		// 40점 미만 -> 과락인 경우
			printf("과락\n");
			pass = false;	// 하나라도 과락이 일어나면 안 되기 때문에
		}
	}

	//	2) 총점 통과 여부 (평균이, 60점 이상인지 미만인지 파악)
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += score[i];
	}
	int average = (double)sum / 5;
	if (average >= 60) {		// 평균값이 60점 이상일 때	=> pass인 경우
		printf("평균 %d점으로, PASS\n", average);
	}
	else {		// 평균값이 60점 미만일 때		=> fail인 경우
		printf("평균 %d점으로, FAIL\n", average);
		pass = false;	// 총점 평균에 대해서도 60점 이상이어야 하기 때문에
				// 만족하지 못한다면 false값으로 수정
	}

	//	3) 합격 / 불합격 여부 출력
	if (pass == true) {		// true값을 유지하고 있다면, 불합격 요소가 없음
		printf("\n축하합니다. 정보처리기사 필기 시험에 합격하셨습니다.\n");
	}
	else {		// pass == false인 경우		=> 불합격 요소가 하나라도 있었다면
		printf("\n정보처리기사 필기 시험에 불합격하였습니다.\n");
	}
}