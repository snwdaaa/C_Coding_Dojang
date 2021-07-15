// 삼항 연산자로 4.000000 출력

#include <stdio.h>

int main(void)
{
	float num1 = 1.2f;
	float num2;

	printf("%f\n", (num1 > 2.0f) ? 3.0f : 4.0f);

	return 0;
}