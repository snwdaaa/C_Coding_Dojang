// ����÷ο�
// 0.000000e+00 ���

#include <stdio.h>
#include <float.h>

int main(void)
{
	float num1 = FLT_MIN;

	num1 /= 100000000.0f;

	printf("%e\n", num1);

	return 0;
}