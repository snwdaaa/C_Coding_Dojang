#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 30);

	strcpy(s1, "The Little Prince");

	char* ptr = strtok(s1, " "); // 공백문자를 기준으로 문자열을 자른 후 포인터 반환

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " "); // 다음 문자열을 자른 후 포인터 반환
	}

	free(s1);

	return 0;
}