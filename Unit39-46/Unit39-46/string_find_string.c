// ���ڿ����� ���ڿ��� �˻��ϱ�

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "A Garden Diary";

	// ���ڿ� �˻�
	char* ptr = strstr(s1, "den");

	printf("%s\n", ptr);

	return 0;
}