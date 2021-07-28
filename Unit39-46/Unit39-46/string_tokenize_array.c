// 문자를 기준으로 문자열 자르기
// strtok(대상문자열, 기준문자)
// 자른 문자열을 반환한다. 더 이상 자를 문자열이 없으면 NULL 반환

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "The Little Prince";
	char* ptr = strtok(s1, " "); // 공백문자를 기준으로 문자열을 자른 후 포인터 반환

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " "); // 다음 문자열을 자른 후 포인터 반환
	}

	return 0;
}