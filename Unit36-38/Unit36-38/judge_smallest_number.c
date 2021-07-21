// 정수 다섯 개 입력. 입력된 정수 중에서 가장 작은 정수 찾기.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int numbers[5];
	int smallestNum;

	// 정수 입력 받기
	scanf("%d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4]);

	smallestNum = numbers[0];

	for (int i = 0; i < 5; i++)
	{
		if (numbers[i] <= smallestNum)
			smallestNum = numbers[i];
	}

	printf("%d\n", smallestNum);

	return 0;
}