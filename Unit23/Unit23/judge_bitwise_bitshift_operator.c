// 정수 입력(unsigned long long). 왼쪽으로 20번, 오른쪽으로 4번 시프트 연산하여 결과 출력(%llu)

#include <stdio.h>

int main()
{
	unsigned long long num1;

	scanf("%llu", &num1);

	num1 <<= 20;
	num1 >>= 4;

	printf("%llu\n", num1);

	return 0;
}