// Ư�� �ܾ� ���� ����
// ���� 1000 ������ ���ڿ� �Է�
// �Էµ� ���ڿ����� "the"�� ������ ����ϴ� ���α׷� �����
// "the" -> "them", "their", "there" ���� ���� X & �ҹ����� "the"�� ã��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1001];
	int wordCount = 0; // �ܾ��� ������ �� ����

	// ���ڿ� �Է�
	scanf("%[^\n]s", str);

	char* strToken = strtok(str, "the");

	while (strToken != NULL)
	{
		if (strToken == "the")
		{
			wordCount++;
			strToken = strtok(NULL, "the");
		}
	}

	printf("%d\n", wordCount);

	return 0;
}