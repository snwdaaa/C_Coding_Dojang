// scanf �Լ����� ������ ������ ���ڿ� �Է¹ޱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[30];

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%[^\n]s", s1); // [^\n] -> ������� �����Ͽ� ���ڿ� �Է¹ޱ�

	printf("%s\n", s1);

	return 0;
}