// 단어 단위의 2-gram

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char text[100] = "this is c language";
	char* tokens[30] = { NULL, };
	int count = 0;

	char* ptr = strtok(text, " "); // 공백으로 문자열 자르기

	while (ptr != NULL)
	{
		tokens[count] = ptr;
		count++;

		ptr = strtok(NULL, " ");
	}

	// 2-gram이므로 마지막 요소의 한 개 앞까지만 반복
	for (int i = 0; i < count - 1; i++)
	{
		printf("%s %s\n", tokens[i], tokens[i + 1]);
	}

	return 0;
}