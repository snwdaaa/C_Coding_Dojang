// �����ͷ� 3���� �迭 �����
// �����Ϳ� �Ҵ�� �޸𸮸� ���� 2, ���� ũ�� 3, ���� ũ�� 5�� 3���� �迭ó�� ����� �� �ְ� �����

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long*** m = malloc(sizeof(long long) * 2);

	int i, j;

	// 2���� �迭 �����
	for (i = 0; i < 2; i++)
	{
		m[i] = (long long**)malloc(sizeof(long long*) * 3);

		for (j = 0; j < 3; j++)
		{
			m[i][j] = (long long*)malloc(sizeof(long long) * 5);
		}
	}

	m[1][2][4] = 100;

	printf("%lld\n", m[1][2][4]);

	// �޸� ����
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			free(m[i][j]);
		}

		free(m[i]);
	}

	free(m);

	return 0;
}