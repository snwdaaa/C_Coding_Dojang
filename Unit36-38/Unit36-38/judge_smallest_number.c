// ���� �ټ� �� �Է�. �Էµ� ���� �߿��� ���� ���� ���� ã��.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int numbers[5];
	int smallestNum;

	// ���� �Է� �ޱ�
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