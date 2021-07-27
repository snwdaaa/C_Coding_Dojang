// 숫자와 문자열 조합해서 문자열 만들기
// 9th Symphony 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[20];

	sprintf(s1, "%dth %s", 9, "Symphony");

	printf("%s\n", s1);

	return 0;
}