// �ڸ� ���ڿ� �����ϱ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, }; // ���ڿ��� �޸� �ּҸ� ������ ����. NULL�� �ʱ�ȭ

	int i = 0; // ���ڿ� ������ �迭 �ε���

	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		// �ڸ� ���ڿ� ptr�� sArr�� ����
		sArr[i] = ptr;
		i++;

		ptr = strtok(NULL, " "); // ���� ���ڿ� �ڸ���
	}

	for (i = 0; i < 10; i++)
	{
		// sArr�� NULL�� �ƴϸ�
		if (sArr[i] != NULL)
		{
			// ����� ���ڿ� ���
			printf("%s\n", sArr[i]);
		}
	}

	return 0;
}