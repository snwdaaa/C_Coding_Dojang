// 문자열(길이 30 이하) 네 개 입력. 입력된 문자열 네 개를 각각 한 줄씩 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 30);
	char* s2 = (char*)malloc(sizeof(char) * 30);
	char* s3 = (char*)malloc(sizeof(char) * 30);
	char* s4 = (char*)malloc(sizeof(char) * 30);

	scanf("%s %s %s %s", s1, s2, s3, s4);

	printf("%s\n%s\n%s\n%s\n", s1, s2, s3, s4);

	free(s1);
	free(s2);
	free(s3);
	free(s4);

	return 0;
}