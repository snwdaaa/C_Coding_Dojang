// 문자열에서 문자열로 검색하기

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100] = "A Garden Diary A Garden Diary A Garden Diary";

	// 문자열 검색
	char* ptr = strstr(s1, "den");
	
	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strstr(ptr + 1, "den");
	}

	return 0;
}