// 실수 자료형의 최댓값, 최솟값

#include <stdio.h>
#include <float.h>

int main(void)
{
	float num1 = FLT_MAX;
	float num2 = FLT_MIN;
	double num3 = DBL_MAX;
	double num4 = DBL_MIN;
	long double num5 = LDBL_MAX;
	long double num6 = LDBL_MIN;

	printf("%.2f %.40f\n%e %e\n%le %le\n", num1, num2, num3, num4, num5, num6);

	return 0;
}