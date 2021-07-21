// 'q'를 입력하면 종료되는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c1;

	do
	{
		scanf(" %c", &c1);
	} while (c1 != 'q');

	printf("프로그램 종료\n");

	return 0;
}