// 입력된 문자열을 문자 단위로 4-gram 출력
// 3글자 이하의 단어가 입력되면 wrong 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char text[30];
	int length;
	int n = 4;

	scanf("%s", text);

	length = strlen(text);
	if (length < n)
	{
		printf("wrong\n");
	}
	else
	{
		for (int i = 0; i < length - (n-1); i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("%c", text[i + j]);
			}
			printf("\n");
		}
	}

	return 0;
}