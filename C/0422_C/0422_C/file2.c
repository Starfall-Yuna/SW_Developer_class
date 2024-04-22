#include <stdio.h>

int main() {
	// 형식에 맞추어서 여러 개의 입력을 한번에 받을 수 있음
	// fprintf() :: c파일 통해서 txt파일에 입력
	// fscanf() :: txt 파일을 스캔(불러오기)

	FILE* fp;
	int age;
	double height;

	fp = fopen("sample.txt", "w");	// 쓰기 모드로 파일 열기
	if (fp != NULL) {
		printf("파일 열기 성공\n");

		// 3명의 나이와 키를 콘솔 상에서 입력 & 입력값 파일에 넣기
		for (int i = 0; i < 3; i++) {
			printf("%d번째 정보 입력) ", i + 1);
			scanf("%d %lf", &age, &height);		// scanf() :: 콘솔상 입력

			// fprintf(FILE*, "서식지정자 형식", 넣을 값) 
			//		:: 형식에 맞춘 값을 파일에 넣는 역할
			fprintf(fp, "%d %lf\n", age, height);
		}
	}
	else {
		printf("파일 열기 실패\n");
	}
	rewind(fp);


	int sAge;	
	double sHeight;		// 파일에 있는 값들 받아낼 용도
	fp = fopen("sample.txt", "r");		// 읽기 모드로 변환
	if (fp != NULL) {
		printf("파일 열기 성공\n");

		for (int i = 0; i < 3; i++) {
			// fscanf(FILE*, "서식지정자 형식", 파일값들 받아낼 변수주소) 
			//		:: 파일의 값들을 불러오는 역할
			fscanf(fp, "%d %lf", &sAge, &sHeight);
			printf("%d번째 정보(나이, 키) :: %d, %.1f\n", i + 1, sAge, sHeight);
		}
	}
	else {
		printf("파일 열기 실패\n");
	}
}