// ���� �����ؼ� ���ڿ� �����Ϳ� ���ڿ� �����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 20); // �޸� ���� �Ҵ�

	sprintf(s1, "Hello, %s", "world!"); // ������ Hello, %s�� ���� �� s1�� ����

	printf("%s\n", s1);

	free(s1);

	return 0;
}