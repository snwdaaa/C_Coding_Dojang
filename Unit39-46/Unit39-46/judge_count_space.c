// 길이 1000 이하의 문자열이 입력.
// 입력된 문자열에서 공백의 개수를 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1001];
	char count = 0;

	// scanf에서 공백을 포함한 문자열을 입력받음
	scanf("%[^\n]s", str);

	char* ptr = strchr(str, ' ');

	while (ptr != NULL)
	{
		
		if (ptr[0] == ' ')
		{
			count++;
		}
		
		ptr = strchr(ptr + 1, ' ');
	}

	printf("%d\n", count);

	return 0;
}