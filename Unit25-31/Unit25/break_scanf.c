// 입력한 횟수대로 반복하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int count;

	scanf("%d", &count);

	int i = 1;
	while (1)
	{
		printf("%d\n", i);
		i++;

		if (i > count)
			break;
	}

	return 0;
}
