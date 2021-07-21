// 2 5, 4 4, 8 3, 16 2, 32 1 Ãâ·Â
#include <stdio.h>

int main(void)
{
	for (int i = 2, j = 5; i <= 32; i *= 2, j--)
	{
		printf("%d %d\n", i, j);
	}

	return 0;
}