// 실수형 변수 선언

#include <stdio.h>

int main(void)
{
	float num1 = 0.1f; // float형은 뒤에 f,F 붙이기
	double num2 = 3867.215820;
	long double num3 = 9.327513l; // long double형은 뒤에 l,L 붙이기

	// double, float -> %d, long double -> %Lf
	printf("%f %f %Lf\n", num1, num2, num3);

	return 0;
}