// 입력받은 문자열을 동적 메모리에 저장하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 10);

	printf("문자열을 입력하세요: ");
	scanf("%s", s1);

	printf("%s\n", s1);

	free(s1);

	return 0;
}