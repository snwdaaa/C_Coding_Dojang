// 자료형 크기 구하기
// 8과 4 출력

#include <stdio.h>

int main(void)
{
	double num1 = 0.4284;
	float num2 = 2.7f;

	printf("num1의 크기: %d, num2의 크기: %d\n", sizeof(num1), sizeof(num2));

	return 0;
}