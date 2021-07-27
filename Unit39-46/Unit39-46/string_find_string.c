// 문자열에서 문자열로 검색하기

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "A Garden Diary";

	// 문자열 검색
	char* ptr = strstr(s1, "den");

	printf("%s\n", ptr);

	return 0;
}