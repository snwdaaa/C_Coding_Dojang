// 입력한 숫자까지 짝수 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int count;

	scanf("%d", &count);

	for (int i = 1; i <= count; i++)
	{
		if (i % 2 != 0)
			continue;

		printf("%d\n", i);
	}

	return 0;
}