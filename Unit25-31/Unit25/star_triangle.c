// 계단식 별 출력

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 1; i <= 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}