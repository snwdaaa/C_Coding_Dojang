// �Է��� ũ�⸸ŭ �޸� �Ҵ��ؼ� �����͸� 2���� �迭ó�� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int col, row; // ��, ��

	printf("�� ��\n");
	scanf("%d %d", &col, &row);

	// ������ �迭 ����
	int** dblPtr = (int**)malloc(sizeof(int*) * col);

	// �迭�� �� ���ҿ��� ���� �Ҵ�
	for (int i = 0; i < col; i++)
	{
		dblPtr[i] = (int*)malloc(sizeof(int) * row);
	}

	// �� ����
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			dblPtr[i][j] = i + j;
		}
	}

	// �� ���
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d ", dblPtr[i][j]);
		}
		printf("\n");
	}

	// �޸� ����
	for (int i = 0; i < col; i++)
	{
		free(dblPtr[i]);
	}

	free(dblPtr);

	return 0;
}