// ���ڸ� �������� ���ڿ� �ڸ���
// strtok(����ڿ�, ���ع���)
// �ڸ� ���ڿ��� ��ȯ�Ѵ�. �� �̻� �ڸ� ���ڿ��� ������ NULL ��ȯ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "The Little Prince";
	char* ptr = strtok(s1, " "); // ���鹮�ڸ� �������� ���ڿ��� �ڸ� �� ������ ��ȯ

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " "); // ���� ���ڿ��� �ڸ� �� ������ ��ȯ
	}

	return 0;
}