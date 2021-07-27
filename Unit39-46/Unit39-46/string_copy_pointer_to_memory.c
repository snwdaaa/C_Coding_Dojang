// 문자열 포인터에 문자열을 복사하는 법 -> 문자열 포인터 공간을 동적으로 할당해줘야 함

#define _CRT_SECURE_NO_WARNINGS // strcpy 경고 방지
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char* s1 = "Hello";
	char* s2 = (char*)malloc(sizeof(char) * 10);

	strcpy(s2, s1);

	printf("%s\n", s2);

	free(s2);

	return 0;
}