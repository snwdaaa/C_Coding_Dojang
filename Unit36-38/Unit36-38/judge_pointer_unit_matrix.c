// 단위행렬(왼쪽 위부터 오른쪽 아래까지 대각선이 1이며, 나머지는 0인 행렬) 만들기
// 정사각행렬의 크기 입력 (2~10). 입력된 크기만큼 단위행렬을 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int size;
	int i, j;

	printf("정사각행렬의 크기 입력 : ");
	scanf("%d", &size);

	// [i][i]가 1, 나머지는 0

	// 2차원 행렬 만들기
	int** dblPtr = (int**)malloc(sizeof(int*) * size);

	for (i = 0; i < size; i++)
	{
		// 0으로 초기화
		dblPtr[i] = (int*)calloc(size, sizeof(int));
	}

	// 주대각선을 1로 설정
	for (i = 0; i < size; i++)
	{
		dblPtr[i][i] = 1;
	}

	// 출력
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