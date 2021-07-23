// 포인터로 3차원 배열 만들기
// 포인터에 할당된 메모리를 높이 2, 세로 크기 3, 가로 크기 5인 3차원 배열처럼 사용할 수 있게 만들기

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long*** m = malloc(sizeof(long long) * 2);

	int i, j;

	// 2차원 배열 만들기
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

	// 메모리 해제
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