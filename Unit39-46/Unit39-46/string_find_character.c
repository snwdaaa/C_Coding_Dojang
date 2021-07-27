// 문자열에서 특정 문자 검색하기
// strchr(대상 문자열, 검색할 문자)

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "A Garden Diary";

	char* ptr = strchr(s1, 'a');

	// 검색된 문자열이 없을 때까지 반복
	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'a'); // 포인터에 1을 더해 다음 인덱스부터 검색
	}

	return 0;
}