// scanf 함수에서 공백을 포함한 문자열 입력받기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[30];

	printf("문자열을 입력하세요: ");
	scanf("%[^\n]s", s1); // [^\n] -> 공백까지 포함하여 문자열 입력받기

	printf("%s\n", s1);

	return 0;
}