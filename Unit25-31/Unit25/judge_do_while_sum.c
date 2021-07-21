// 정수(0~1000) 입력. 0부터 입력된 숫자까지의 합을 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned int sum = 0;
	unsigned int num;

	scanf("%u", &num);

	unsigned int i = 0;

	do
	{
		sum += i;
		i++;
	} while (i <= num);

	printf("%u\n", sum);

	return 0;
}