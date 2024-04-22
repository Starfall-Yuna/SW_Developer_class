#include <stdio.h>

// 파일 "입출력"	=> <stdio.h>에 있는 명령문 사용
int main() {
	// 파일 불러오기 :: fopen()
	// r :: 읽기 모드
	// w :: 쓰기 모드, 처음부터 새로 작성(기존의 내용 삭제)
	// w+ :: 읽기+쓰기 모드, 파일 있으면 새로운 데이터로 덮어씌워짐(w와 유사)
	// a :: 추가 모드, 파일이 있으면 끝에 데이터 추가
	
	// "sample.txt" 파일을 가리키는 포인터 변수 생성
	FILE* fp = fopen("sample.txt", "w+");

	// NULL :: "정보가 없는"
	if (fp != NULL) {		// fp 변수에 어떠한 정보라도 받았다면
		printf("파일 불러오기 성공\n");

		// 파일 입력 :: c파일 통해서 -> txt 파일 내용 작성
		// fputc(문자정보, FILE*) :: 문자 하나씩 파일에 입력
		fputc('a', fp);
		fputc('b', fp);
		fputc('c', fp);
		rewind(fp);		// 파일의 시작으로 커서 위치 이동

		// 파일 내용 불러오기
		// fgetc(FILE*) :: 지정된 파일의 내용을 하나씩 불러옴
		while (1) {
			char c = fgetc(fp);		
				// 변수 c를 통해서, fp의 내용을 한바퀴에 한 문자씩 불러옴
			if (c == EOF) { break; }	// 어떠한 문자라도 받으면, break를 만나지X

			printf("%c", c);
		}
	}
	else {		// "fp == NULL"		=> fp 변수에 어떤 정보도 없다면
		printf("파일 불러오기 실패\n");
	}

	// 파일 닫기 :: fclose(FILE*)
	fclose(fp);
}