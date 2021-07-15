// 삼항 연산자
#include <stdio.h>

int main(void)
{
	int num1 = 5;
	int num2;

	num2 = (num1) ? 100 : 200; // 조건식이 참이면 100을 리턴, 거짓이면 200을 리턴

	printf("%d\n", num2);

	return 0;
}