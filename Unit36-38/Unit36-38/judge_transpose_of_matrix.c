// 전치행렬 구하기
// 5x5 정사각행렬 입력. 전치행렬 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int matrix[5][5];

	int i, j;

	// 입력
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}

	printf("\n");

	// 전치행렬 출력
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