// true, false를 문자열로 출력하기

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool b1 = true;
	bool b2 = false;

	printf(b1 ? "true" : "false");
	printf("\n");
	printf(b2 ? "true" : "false");
	printf("\n");

	printf("%s\n", b1 ? "true" : "false");
	printf("%s\n", b2 ? "true" : "false");

	return 0;
}