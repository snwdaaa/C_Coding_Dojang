#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 30);

	strcpy(s1, "The Little Prince");

	char* ptr = strtok(s1, " "); // ���鹮�ڸ� �������� ���ڿ��� �ڸ� �� ������ ��ȯ

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " "); // ���� ���ڿ��� �ڸ� �� ������ ��ȯ
	}

	free(s1);

	return 0;
}