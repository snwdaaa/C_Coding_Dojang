// ���� 30 ������ �� ���� ���ڿ� �Է�. �� ���ڿ��� ������ �ٸ��� �� ��� ������ ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 30);
	char* s2 = (char*)malloc(sizeof(char) * 30);

	printf("�� ���ڿ��� �Է��ϼ���(�������� ����): ");
	scanf("%s %s", s1, s2);

	printf("%d\n", strcmp(s1, s2));

	free(s1);
	free(s2);

	return 0;
}