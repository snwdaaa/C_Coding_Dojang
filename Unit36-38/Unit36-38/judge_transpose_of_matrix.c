// ��ġ��� ���ϱ�
// 5x5 ���簢��� �Է�. ��ġ��� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int matrix[5][5];

	int i, j;

	// �Է�
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("\n");

	// ��ġ��� ���
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", matrix[j][i]);
		}
		printf("\n");
	}

	return 0;
}