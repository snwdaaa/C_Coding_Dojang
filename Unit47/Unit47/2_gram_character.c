// 2-gram -> 2���� ���ӵ� ��Ҹ� ����

#include <stdio.h>
#include <string.h>

int main()
{
	char text[30] = "Hello";
	int length;

	length = strlen(text);

	// 2-gram�̹Ƿ� ���ڿ��� ������ �� ���� �ձ����� �ݺ�
	for (int i = 0; i < length - 1; i++)
	{
		printf("%c%c\n", text[i], text[i + 1]); // ���� ���ڿ� �ٷ� ���� ���� ���
	}

	return 0;
}