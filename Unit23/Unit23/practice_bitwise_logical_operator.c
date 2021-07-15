// 5, 4, 1, 250 Ãâ·Â

#include <stdio.h>

int main(void)
{
	unsigned char num1 = 1; // 0000 0001
	unsigned char num2 = 5; // 0000 0101   ->  1111 1010(2) = 2 + 8 + 16 + 32 + 64 + 128 (10) = 150(10)

	printf("%u\n", num1 | num2);
	printf("%u\n", num1 ^ num2);
	printf("%u\n", num1 & num2);

	num1 = ~num2;
	printf("%u\n", num1);

	return 0;
}