// 길이 30 이하의 어떤 문자열이 입력. 두 printf가 같은 문자열을 출력.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[31];
	char s2[31];

	scanf("%s", s1);

	strcpy(s2, s1);

	printf("%s\n", s1);
	printf("%s\n", s2);

	return 0;
}