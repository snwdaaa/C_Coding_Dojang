// 특정 단어 개수 세기
// 길이 1000 이하의 문자열 입력
// 입력된 문자열에서 "the"의 개수를 출력하는 프로그램 만들기
// "the" -> "them", "their", "there" 등은 포함 X & 소문자인 "the"만 찾기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1001];
	int wordCount = 0; // 단어의 개수를 셀 변수

	// 문자열 입력
	scanf("%[^\n]s", str);

	char* strToken = strtok(str, "the");

	while (strToken != NULL)
	{
		if (strToken == "the")
		{
			wordCount++;
			strToken = strtok(NULL, "the");
		}
	}

	printf("%d\n", wordCount);

	return 0;
}