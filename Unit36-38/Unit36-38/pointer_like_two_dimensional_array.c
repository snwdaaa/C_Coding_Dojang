// 포인터에 할당된 메모리를 2차원 배열처럼 사용
// 이중 포인터 -> 포인터 배열 -> 포인터 배열의 각 원소들에 메모리 동적 할당

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 이중 포인터
	int** doublePtr = (int**)malloc(sizeof(int*) * 3);

	// 포인터 배열
	for (int i = 0; i < 3; i++)
	{
		doublePtr[i] = (int*)malloc(sizeof(int) * 4);
	}

	doublePtr[0][0] = 1;
	doublePtr[2][0] = 5;
	doublePtr[2][3] = 2;

	printf("%d\n", doublePtr[0][0]);
	printf("%d\n", doublePtr[2][0]);
	printf("%d\n", doublePtr[2][3]);

	for (int i = 0; i < 3; i++)
	{
		free(doublePtr[i]);
	}

	free(doublePtr);

	return 0;
}