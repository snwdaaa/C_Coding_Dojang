// if 조건문에서 불 자료형 사용하기

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	if (true)
		printf("참\n");
	else
		printf("거짓\n");

	if (false)
		printf("참\n");
	else
		printf("거짓\n");

	return 0;
}