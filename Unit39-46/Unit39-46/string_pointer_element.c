// ���ڿ� �����Ϳ��� �ε����� ���ڿ� ����
#include <stdio.h>

int main(void)
{
	char* s1 = "Hello";
	
	printf("%c\n", s1[1]);
	printf("%c\n", s1[4]);
	printf("%c\n", s1[5]); // NULL

	return 0;
}