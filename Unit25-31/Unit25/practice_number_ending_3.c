// 1�� 103 ������ ���� �� 3���θ� ������ ���ڸ� ���

#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 103; i++)
	{
		if (i % 10 == 3)
			printf("%d\n", i);
		else
			continue;
	}

	return 0;
}