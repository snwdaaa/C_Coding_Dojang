// sprintf �Լ��� ������ �����Ͽ� ���ڿ� �����

#define _CRT_SECURE_NO_WARNINGS // sprintf �Լ� ���� ��� ����
#include <stdio.h>

int main()
{
	char s1[20];

	sprintf(s1, "Hello, %s", "world!"); 
	// sprintf(�迭, ����, ��1, ��2, ...)
	// ���Ŀ� ���� ������� ��, �迭�� �����Ѵ�.

	printf("%s\n", s1);

	return 0;
}