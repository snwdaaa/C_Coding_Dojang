// ���� 60 ������ ���ͳ� �������� �Է�.
// ��(.)�� �������� ���ڿ��� �и��� ��, �� �ٸ��� ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char domain[61];

	// ������ �Է�
	scanf("%s", domain);

	// ���� �������� �и��� ��, �� �ٸ��� ���
	char* strToken = strtok(domain, ".");

	while (strToken != NULL)
	{
		printf("%s\n", strToken);
		strToken = strtok(NULL, ".");
	}

	return 0;
}