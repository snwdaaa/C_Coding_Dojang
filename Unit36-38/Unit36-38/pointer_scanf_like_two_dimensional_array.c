// 입력한 크기만큼 메모리 할당해서 포인터를 2차원 배열처럼 사용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int col, row; // 행, 열

	printf("행 열\n");
	scanf("%d %d", &col, &row);

	// 포인터 배열 선언
	int** dblPtr = (int**)malloc(sizeof(int*) * col);

	// 배열의 각 원소에서 동적 할당
	for (int i = 0; i < col; i++)
	{
		dblPtr[i] = (int*)malloc(sizeof(int) * row);
	}

	// 값 대입
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			dblPtr[i][j] = i + j;
		}
	}

	// 값 출력
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d ", dblPtr[i][j]);
		}
		printf("\n");
	}

	// 메모리 해제
	for (int i = 0; i < col; i++)
	{
		free(dblPtr[i]);
	}

	free(dblPtr);

	return 0;
}