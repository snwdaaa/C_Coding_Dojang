// �Ǽ�(���� ǥ���)�� ���ڿ��� ��ȯ�ϱ�
// sprintf �Լ� �̿�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[20];
	float num1 = 38.972340f;

	sprintf(s1, "%e", num1);

	printf("%s", s1);

	return 0;
}