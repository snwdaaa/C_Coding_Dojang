// ����� ũ�� m,n(3~10) & ���� ��� �Է�
// ��� �ȿ��� *�� ���ڰ�, .�� ���ڰ� �ƴ�.
// ���ڰ� �ƴ� ��ҿ��� ������ ������ ������ ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// matrix[i][j] ��ġ�� ���ڰ� ������ mineCount�� 1�� ���ϴ� �Լ�
void CheckMine(int i, int j, char** matrix, int* mineCount)
{
	if (matrix[i][j] == '*')
	{
		*mineCount += 1;
	}
}

int main(void)
{
	int m = 0, n = 0; // m: ����, n: ����
	int i = 0, j = 0;
	int mineCount = 0; // �ֺ��� ������ ������ ����

	// �Ҹ���
	bool isInArea_row;
	bool isInArea_col;

	// ��� ����
	printf("����� ũ�� �Է� (���� ����) (���� : 3~10) : ");
	scanf("%d %d", &n, &m);
	
	char** matrix = (char**)malloc(sizeof(char*) * m);

	for (i = 0; i < m; i++)
	{
		// �� ���ڸ� ����� n+1��ŭ �Ҵ�
		matrix[i] = (char*)malloc(sizeof(char) * (n + 1));
	}

	printf("���� ��� %d�� �Է�\n", m);

	// ��� �Է�
	for (i = 0; i < m; i++)
	{
		scanf("%s", matrix[i]);
	}

	printf("\n");

	// ���ڸ� * ����ϰ�, �ƴϸ� ��ҿ� ������ ���ڰ��� ���
	// i�� ����, j�� ����
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			// ���� ���� �ʱ�ȭ
			mineCount = 0;

			// ����
			if (matrix[i][j] == '*')
			{
				printf("*");
			}
			else
			{
				// �밢�� �Ǻ��� ���� �Ҹ��� ��
				isInArea_row = (j >= 1) && (j <= n - 2); // ����� ���� ���� 1 ~ (n-2) �ȿ� �ִ��� Ȯ�� 
				isInArea_col = (i >= 1) && (i <= m - 2); // ����� ���� ���� 1 ~ (m-2) �ȿ� �ִ��� Ȯ��

				// �밢�� �Ǻ��� ������ ���� => ���ΰ� 1~n-2, ���ΰ� 1~m-2 ���̿� �ִ� ��Ҹ�
				if (isInArea_row && isInArea_col)
				{
					// �밢�� & ���Ʒ� ���� ������ �Ǻ�
					CheckMine(i - 1, j - 1, matrix, &mineCount); // ���� ��
					CheckMine(i - 1, j, matrix, &mineCount); // ��
					CheckMine(i - 1, j + 1, matrix, &mineCount); // ������ ��
					CheckMine(i, j - 1, matrix, &mineCount); // ����
					CheckMine(i, j + 1, matrix, &mineCount); // ������
					CheckMine(i + 1, j - 1, matrix, &mineCount); // ���� �Ʒ�
					CheckMine(i + 1, j, matrix, &mineCount); // �Ʒ�
					CheckMine(i + 1, j + 1, matrix, &mineCount); // ������ �Ʒ�
				}
				else
				{
					// �� ������ ��
					if (i == 0)
					{
						// �� ���� �� �𼭸�
						if (j == 0)
						{
							CheckMine(i, j + 1, matrix, &mineCount); // ������
							CheckMine(i + 1, j, matrix, &mineCount); // �Ʒ�
							CheckMine(i + 1, j + 1, matrix, &mineCount); // ������ �Ʒ�
						}
						// �� ������ �� �𼭸�
						else if (j == n - 1)
						{
							CheckMine(i, j - 1, matrix, &mineCount); // ����
							CheckMine(i + 1, j, matrix, &mineCount); // �Ʒ�
							CheckMine(i + 1, j - 1, matrix, &mineCount); // ���� �Ʒ�
						}
						// �� ������ ��
						else if ((j > 0) && (j < n - 1))
						{
							CheckMine(i, j - 1, matrix, &mineCount); // ��
							CheckMine(i, j + 1, matrix, &mineCount); // ��
							CheckMine(i + 1, j, matrix, &mineCount); // �Ʒ�
							CheckMine(i + 1, j - 1, matrix, &mineCount); // ���� �Ʒ�
							CheckMine(i + 1, j + 1, matrix, &mineCount); // ������ �Ʒ�
						}
					}
					// �� �Ʒ����� ��
					else if (i == m - 1)
					{
						// �� ���� �Ʒ� �𼭸�
						if (j == 0)
						{
							CheckMine(i - 1, j, matrix, &mineCount); // ��
							CheckMine(i, j + 1, matrix, &mineCount); // ������
							CheckMine(i - 1, j + 1, matrix, &mineCount); // ������ ��
						}
						// �� ������ �Ʒ� �𼭸�
						else if (j == n - 1)
						{
							CheckMine(i - 1, j, matrix, &mineCount); // ��
							CheckMine(i, j - 1, matrix, &mineCount); // ����
							CheckMine(i - 1, j - 1, matrix, &mineCount); // ���� ��
						}
						// �� ������ ��
						else if ((j > 0) && (j < n - 1))
						{
							CheckMine(i, j - 1, matrix, &mineCount); // ��
							CheckMine(i, j + 1, matrix, &mineCount); // ��
							CheckMine(i - 1, j, matrix, &mineCount); // ��
							CheckMine(i - 1, j - 1, matrix, &mineCount); // ���� ��
							CheckMine(i - 1, j + 1, matrix, &mineCount); // ������ ��
						}
					}
					else if((i > 0) && (i < m - 1))
					{
						// �𼭸� ������ ����
						// �� ���� ������
						if (j == 0)
						{
							CheckMine(i - 1, j, matrix, &mineCount); // ��
							CheckMine(i + 1, j, matrix, &mineCount); // �Ʒ�
							CheckMine(i, j + 1, matrix, &mineCount); // ������
							CheckMine(i - 1, j + 1, matrix, &mineCount); // ������ ��
							CheckMine(i + 1, j + 1, matrix, &mineCount); // ������ �Ʒ�
						}
						// �� ������ ������
						else if (j == n - 1)
						{
							CheckMine(i - 1, j, matrix, &mineCount); // ��
							CheckMine(i + 1, j, matrix, &mineCount); // �Ʒ�
							CheckMine(i, j - 1, matrix, &mineCount); // ����
							CheckMine(i - 1, j - 1, matrix, &mineCount); // ���� ��
							CheckMine(i + 1, j - 1, matrix, &mineCount); // ���� �Ʒ�
						}
					}
				}

				// ���� ���� ���
				printf("%d", mineCount);
			}
		}
		printf("\n");
	}

	// �޸� ����
	for (i = 0; i < m; i++)
	{
		free(matrix[i]);
	}

	free(matrix);

	return 0;
}