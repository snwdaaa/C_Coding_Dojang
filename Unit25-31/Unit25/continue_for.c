// continue�� �̿��� �Ϻ� �ڵ带 �������� �ʰ� �پ�ѱ�

#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		// Ȧ�� ��� �پ�ѱ�
		if (i % 2 != 0)
			continue;

		printf("%d\n", i);
	}

	return 0;
}