// ������ ǥ������� ���� ���ڿ��� �Ǽ��� ��ȯ

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "3.e5";
	float num1;

	num1 = atof(s1);

	printf("%e %f", num1, num1);

	return 0;
}