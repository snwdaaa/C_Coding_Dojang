// continue�� �̿��� �ڵ� ���� �ǳʶٱ�

#include <stdio.h>

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		i++;

		// Ȧ���� ���� �ǳʶٱ�
		if (i % 2 != 0)
			continue;

		printf("%d\n", i);
	}

	return 0;
}