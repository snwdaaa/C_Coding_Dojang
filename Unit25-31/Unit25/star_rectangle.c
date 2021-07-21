// 7x3 직사각형 모양 별찍기

#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}