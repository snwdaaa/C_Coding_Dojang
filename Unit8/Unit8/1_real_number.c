// �Ǽ��� ���� ����

#include <stdio.h>

int main(void)
{
	float num1 = 0.1f; // float���� �ڿ� f,F ���̱�
	double num2 = 3867.215820;
	long double num3 = 9.327513l; // long double���� �ڿ� l,L ���̱�

	// double, float -> %d, long double -> %Lf
	printf("%f %f %Lf\n", num1, num2, num3);

	return 0;
}