// ���ڿ� �����ϱ�

#define _CRT_SECURE_NO_WARNINGS // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "Hello";
	char s2[10];

	// s1�� ���ڿ��� s2�� ����
	strcpy(s2, s1);

	printf("%s\n", s2);

	return 0;
}