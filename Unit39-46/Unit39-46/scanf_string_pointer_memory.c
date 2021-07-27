// 문자열 포인터에 문자열 저장

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 10);

	printf("문자열을 입력하세요 : ");
	scanf("%s", s1); // 문자열 포인터에 문자열 입력

	printf("%s\n", s1);

	free(s1);

	return 0;
}