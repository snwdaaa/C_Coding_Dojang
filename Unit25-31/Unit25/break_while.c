// break�� �ݺ��� ������

#include <stdio.h>

int main(void)
{
	int num1 = 0;

	while (1)
	{
		num1++;

		printf("%d\n", num1);

		// num1�� 100�� �� �ݺ������κ��� ��������
		if (num1 == 100)
			break;
	}

	return 0;
}