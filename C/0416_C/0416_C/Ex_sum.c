#include <stdio.h>

// 1~ 100���� ���ϴ� �Լ� ����
// 1+2+3+ ... +99+100 �޽��� ��� (5050 ���� ��ȯ)
//		=> �����ϸ�, ������ ���۰� ��(1���� 100)�� ���� ���ϸ� �Ǵ�
//			�Ű������� ������ �ʿ��غ����� �ʴ´�.
int sum() {
	int result = 0;		// 1���� 100���� ���� �� ������ ����
	for (int i = 1; i <= 100; i++) {
		result += i;		// 1���� 100���� i�� ���ϸ鼭 result�� ���� ����
		
		printf("%d", i);
		if (i != 100) { printf("+"); }
	}
	printf("\n");
	
	return result;
}

int main() {
	printf("Total :: %d\n", sum());
	// sum()�� ���� �����ϰ�, main�� printf()�� �����ϰ� ����
	// 1. ���� �����ڿ� �� ���� ���������� Ȯ���ϰ�
	// 2. �����̶�� printf()�� ����
}