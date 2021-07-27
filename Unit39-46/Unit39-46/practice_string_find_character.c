// 문자열 안에서 문자로 검색하기
// "n Wonderland", "nderland", "nd" 출력

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "Alice in Wonderland";
	char* ptr = strchr(s1, 'n');

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'n');
	}

	return 0;
}