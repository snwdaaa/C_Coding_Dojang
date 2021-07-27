// 문자열 포인터에 문자열 붙이기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* s1 = "world";
	char* s2 = (char*)malloc(sizeof(char) * 20);

	strcpy(s2, "Hello");
	strcat(s2, s1);

	printf("%s\n", s2);

	free(s2);

	return 0;
}