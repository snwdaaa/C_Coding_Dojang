// break�� for�� ����������

#include <stdio.h>

int main(void)
{
	int num1 = 0;

	for (;;num1++)
	{
		printf("%d\n", num1);

		// num1�� 100�� �� for�����κ��� Ż��
		if (num1 == 100)
			break;
	}

	return 0;
}