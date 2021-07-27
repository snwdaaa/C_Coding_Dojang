// 길이 30 이하의 문자열 입력. 입력된 문자열 뒤에 th 붙여서 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[40];

	scanf("%s", s1);
	strcat(s1, "th");

	printf("%s", s1);

	return 0;
}