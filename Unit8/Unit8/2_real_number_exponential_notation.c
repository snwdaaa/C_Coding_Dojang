// 지수 표기법으로 실수 저장

#include <stdio.h>

int main()
{
	float num1 = 3.e5f; // 3.0 * 10^5, float 뒤에 f 붙이기
	double num2 = -1.3827e-2; // -1.3827 * 10^-2
	long double num3 = 5.21e+9l; // 5.21 * 10^9, long double 뒤에 l 붙이기

	printf("%f %f %Lf\n", num1, num2, num3);

	// 지수 표기법으로 출력
	// float, double -> %e, long double -> %Le
	printf("%e %e %Le\n", num1, num2, num3);

	return 0;
}