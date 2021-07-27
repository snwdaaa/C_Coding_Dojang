// 길이 30 이하의 어떤 문자열 입력. 입력된 문자열의 길이 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 30);

	printf("문자열을 입력하세요: ");
	scanf("%s", s1);

	printf("문자열의 길이: %d\n", strlen(s1));

	free(s1);

	return 0;
}