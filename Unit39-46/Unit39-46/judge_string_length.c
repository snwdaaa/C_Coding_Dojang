// ���� 30 ������ � ���ڿ� �Է�. �Էµ� ���ڿ��� ���� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 30);

	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", s1);

	printf("���ڿ��� ����: %d\n", strlen(s1));

	free(s1);

	return 0;
}