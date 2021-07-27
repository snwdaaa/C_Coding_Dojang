// 문자열 비교하기

#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = "Hello";
	char s2[10] = "Hello";

	int ret = strcmp(s1, s2);

	printf("%d\n", ret);

	return 0;
}