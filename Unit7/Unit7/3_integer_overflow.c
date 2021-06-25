// 오버플로우 발생 -> 최솟값부터 다시 시작
#include <stdio.h>

int main()
{
	char num1 = 128; // char 최대인 127 초과 -> 오버플로우 발생 -> -128부터 시작
	unsigned char num2 = 256; // unsigned char 최대인 255 초과 -> 오버플로우 발생 -> 0부터 시작

	printf("%d %u\n", num1, num2);

	return 0;
}