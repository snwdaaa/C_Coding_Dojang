// �����÷ο�
// -inf ���

#include <stdio.h>
#include <float.h>

int main(void)
{
	float num1 = -FLT_MAX;

	num1 *= 1000.f;

	printf("%f\n", num1);

	return 0;
}