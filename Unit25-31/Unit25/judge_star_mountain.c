// �ﰢ���� ���� �Է�(3~10), �Էµ� ���̸�ŭ �� ������� �� ����ϴ� ���α׷�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int height, i, j;

	scanf("%d", &height);

	for (i = 0; i < height; i++)
	{
		// �� �Ʒ����� �� ���� => 2i - 1
		// �� ù��° ���� ���� ���� height - 1 => height - (i+1)
		// ����� �׻� height��°
		for (j = 0; j < height + i; j++)
		{
			if (j < height-(i+1))
				printf(" ");
			else
				printf("*");

		}
		printf("\n");
	}
}