// "Alice's", "Adventures", "in", "Wonderland" 각 줄마다 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[40] = "Alice's Adventures in Wonderland";

	// 문자열을 공백을 기준으로 자르기
	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}

	return 0;
}