// 1, 2, 4, 8, 16, 32, 64, 128 ���

#include <stdio.h>

int main()
{
	unsigned char i = 1;

	while (i != 0)
	{
		printf("%u\n", i);
		i <<= 1; // x 2
	}

	return 0;
}