// 배열 형태의 문자열 -> 문자열 포인터에 복사

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s1[10] = "Hello";
	char* s2 = (char*)malloc(sizeof(char) * 10);

	strcpy(s2, s1);

	printf("%s\n", s2);

	free(s2);

	return 0;
}