// 정수형 변수 선언과 오버플로우
// 0 0 -128 출력
#include <stdio.h>

int main(void)
{
	unsigned short num1;
	unsigned int num2;
	char num3;

	num1 = 65536;
	num2 = 4294967296;
	num3 = 128;

	printf("%u %u %d\n", num1, num2, num3);

	return 0;
}