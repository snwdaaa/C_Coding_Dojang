// ���� 30 ������ ���ڿ� �Է�. �Էµ� ���ڿ� �ڿ� th �ٿ��� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[40];

	scanf("%s", s1);
	strcat(s1, "th");

	printf("%s", s1);

	return 0;
}