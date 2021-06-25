#include <stdio.h>

int main(void)
{
	unsigned char num1 = 200;	// 1 바이트 부호 없는 정수
	unsigned short num2 = 60000; // 2 바이트 부호 없는 정수
	unsigned int num3 = 4123456789; // 4 바이트 부호 없는 정수
	unsigned long num4 = 4123456789; // 4 바이트 부호 없는 정수
	unsigned long long num5 = 12345678901234567890; // 8 바이트 부호 없는 정수

	// unsigned char, unsigned short, unsigned int -> %u
	// unsigned long -> %lu
	// unsigned long long -> %llu
	printf("%u %u %u %lu %llu\n", num1, num2, num3, num4, num5);

	return 0;
}