// 비교 연산자 + 삼항 연산자

#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2;

	num2 = (num1 == 10) ? 100 : 200; // 조건식(num1 == 10)이 참이면 100을 리턴, 거짓이면 200을 리턴

	printf("%d\n", num2);

	return 0;
}