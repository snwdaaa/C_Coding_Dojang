// ���ڸ� ���ڿ��� ��ȯ�ϱ�
// "98.415237 0x3fce1920" ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[30];
	float num1 = 98.415237f;
	int num2 = 0x3fce1920;

	sprintf(str, "%f 0x%x", num1, num2);

	printf("%s\n", str);

	return 0;
}