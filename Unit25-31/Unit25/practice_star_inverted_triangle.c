// 삼각형 거꾸로 별찍기

#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 5; i++)
	{
		/*
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 5 - i; j++)
		{
			printf("*");
		}
		*/

		for (j = 0; j < 5; j++)
		{
			// 공백 갯수 = 줄(i) - 1
			if (j < i)
				printf(" ");
			else
				printf("*");
		}

		printf("\n");
	}

	return 0;
}