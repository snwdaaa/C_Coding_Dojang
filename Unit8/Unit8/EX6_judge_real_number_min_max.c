// �� �ڷ����� �ּڰ��� �ִ� ���

#include <stdio.h>
#include <float.h>

int main(void)
{
	float floatMin = FLT_MIN;
	float floatMax = FLT_MAX;

	printf("%.4f %.4f\n", floatMin, floatMax);

	double doubleMin = DBL_MIN;
	double doubleMax = DBL_MAX;
	long double longDoubleMin = LDBL_MIN;
	long double longDoubleMax = LDBL_MAX;

	printf("%e %e\n", doubleMin, doubleMax);
	printf("%le %le\n", longDoubleMin, longDoubleMax);

	return 0;
}