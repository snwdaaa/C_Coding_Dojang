// �Ǽ��� �ּڰ��� �ִ� ǥ��

#include <stdio.h>
#include <float.h>

int main(void)
{
	float num1 = FLT_MAX;
	double num2 = DBL_MIN;
	long double num3 = LDBL_MAX;

	printf("%.2f\n%e\n%e", num1, num2, num3);

	return 0;
}