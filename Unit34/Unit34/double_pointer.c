// ���� ������
// �������� �޸� �ּҸ� ������
// �������� ������

#include <stdio.h>

int main(void)
{
	int* numPtr1; // ���� ������
	int** numPtr2; // ���� ������
	int num1 = 10;

	numPtr1 = &num1;
	numPtr2 = &numPtr1; // ���� ������ ������ �ּҸ� ����

	printf("%d\n", **numPtr2); // **numPtr2 -> *numPtr1 -> 10

	return 0;
}