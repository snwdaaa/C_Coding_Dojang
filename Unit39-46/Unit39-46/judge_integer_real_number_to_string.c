// ������ �Ǽ��� ���ڿ��� ��ȯ�ϱ�
// 10�� ������ �Ǽ� �Է�
// �� �ٸ��� ���ڿ��� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[10];
	char s2[10];
	int num1;
	float num2;

	scanf("%d %f", &num1, &num2);

	sprintf(s1, "%d", num1);
	sprintf(s2, "%f", num2);

	printf("%s\n%s\n", s1, s2);

	return 0;
}