// �������(���� ������ ������ �Ʒ����� �밢���� 1�̸�, �������� 0�� ���) �����
// ���簢����� ũ�� �Է� (2~10). �Էµ� ũ�⸸ŭ ��������� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;
	int i, j;

	printf("���簢����� ũ�� �Է� : ");
	scanf("%d", &size);

	// [i][i]�� 1, �������� 0

	// 2���� ��� �����
	int** dblPtr = (int**)malloc(sizeof(int*) * size);

	for (i = 0; i < size; i++)
	{
		// 0���� �ʱ�ȭ
		dblPtr[i] = (int*)calloc(size, sizeof(int));
	}

	// �ִ밢���� 1�� ����
	for (i = 0; i < size; i++)
	{
		dblPtr[i][i] = 1;
	}

	// ���
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d ", dblPtr[i][j]);
		}
		printf("\n");
	}


	for (i = 0; i < size; i++)
	{
		free(dblPtr[i]);
	}

	free(dblPtr);

	return 0;
}