// ���� 1000 ������ ���ڿ��� �Է�.
// �Էµ� ���ڿ����� ������ ������ ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1001];
	char count = 0;

	// scanf���� ������ ������ ���ڿ��� �Է¹���
	scanf("%[^\n]s", str);

	char* ptr = strchr(str, ' ');

	while (ptr != NULL)
	{
		
		if (ptr[0] == ' ')
		{
			count++;
		}
		
		ptr = strchr(ptr + 1, ' ');
	}

	printf("%d\n", count);

	return 0;
}