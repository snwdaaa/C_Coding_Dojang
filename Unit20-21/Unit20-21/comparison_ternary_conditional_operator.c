// �� ������ + ���� ������

#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2;

	num2 = (num1 == 10) ? 100 : 200; // ���ǽ�(num1 == 10)�� ���̸� 100�� ����, �����̸� 200�� ����

	printf("%d\n", num2);

	return 0;
}