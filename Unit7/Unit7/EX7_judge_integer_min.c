// 최솟값 표현하기
// -128 0 -2147483648 0 -9223372036854775808 출력

#include <stdio.h>
#include <limits.h>

int main(void)
{
	char num1 = CHAR_MIN;
	unsigned short num2 = 0;
	int num3 = INT_MIN;
	unsigned long num4 = 0;
	long long num5 = LLONG_MIN;

	printf("%d %u %d %u %lld\n", num1, num2, num3, num4, num5);

	return 0;
}