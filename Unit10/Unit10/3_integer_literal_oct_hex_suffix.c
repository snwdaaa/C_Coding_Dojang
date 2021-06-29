// 8진수, 16진수 정수 리터럴 접미사

#include <stdio.h>

int main(void)
{
	printf("0%lo\n", 017L); // long크기 8진수 정수
	printf("0%lo\n", 017UL); // unsigned long 크기 8진수 정수
	printf("0x%lx\n", 0x7FFFFFL); // long 크기 16진수 정수
	printf("0x%lx\n", 0xFFFFFFFFUL); // unsigned long 크기 16진수 정수

	return 0;
}