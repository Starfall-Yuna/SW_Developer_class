#include <stdio.h>

int main() {
	// if - else if - else 
	//	else if, else�� ����Ϸ���, if�� �־�� ��

	// if�� :: "���࿡~ ", ���ǽĿ� ���� ������ ���ɹ��� �޸��� �� ���
	//if (���ǽ�1) {
	//	���ǽ�1�� ������ �� ������ ���ɹ� ����;
	//}

	// else if�� :: "�� ���ǹ��� �������� �ʰ� �� ���ǹ��� ������ ��"
	//		������ ���ɹ� �ۼ��� �� ���
	//else if (���ǹ�2) {
	//	���ǽ�1�� �������� �ʰ�, ���ǽ�2�� ������ �� ������ ���ɹ� ����;
	//}

	// else�� :: "�� ���ǹ�(��)�� �������� ���� ��" ������ ���ɹ� �ۼ�
	//else {
	//	�� ���ǽ��� �������� ���� �� ������ ���ɹ� ����;
	//}

	// ���� 1330�� ���� :: �� �� ���ϱ�
	// 1. 2�� ������ �Է¹ޱ�
	int a, b;
	scanf("%d %d", &a, &b);

	// 2. 2�� �� �� => �� ����� ���� ��� ���
	//		a�� b���� ū�� ������, a�� b�� ������
	if (a > b) {		// a�� b���� ū ���
		printf(">");
	}
	else if (a < b) {		// a�� b���� ���� ���
		printf("<");
	}
	else {		 // a�� b�� ���� ���
		printf("==");
	}
}