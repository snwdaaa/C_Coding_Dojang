// 4 0 Ãâ·Â

#include <stdio.h>

int main(void)
{
	unsigned char flag1 = 1 << 7; // 128 => 1000 0000
	unsigned char flag2 = 1 << 3; // 8 => 0000 1000

	flag1 |= (1<<2); // ON
	flag1 &= ~(1<<7); // OFF
	flag2 ^= (1<<3); // Toggle

	printf("%u %u\n", flag1, flag2);

	return 0;
}