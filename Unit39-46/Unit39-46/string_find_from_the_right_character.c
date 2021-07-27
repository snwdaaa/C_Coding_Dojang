// 문자열의 오른쪽 끝부터 문자로 검색하기
// strrchr(문자열, 문자) -> string right character

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "A Garden Diary";

	char* ptr = strrchr(s1, 'a');

	printf("%s\n", ptr);

	return 0;
}