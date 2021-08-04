// 공백이 포함된 회문 판별
// 길이 30 이하의 영어 문자열 입력 (공백 여러개 연속 가능)
// 입력된 문자열이 회문이면 1, 아니면 0 출력

//회문 검사하다가 공백 나오면 index + 1 한다음에 continue

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char inputText[31];
	char unSpacedText[31]; // inputText에서 공백을 제거한 문자열
	int inputTextLength;
	bool isPalindrome = true;

	int i = 0;

	scanf("%[^\n]s", inputText);

	inputTextLength = strlen(inputText);

	while (i < inputTextLength)
	{
		// 공백 있으면 건너뛰기
		if (inputText[i] == " ")
		{
			continue;
		}
		else
		{
			unspacedText[i] = inputText[i]
		}
	}

	// 공백을 기준으로 쪼갠 후, strcat으로 이어붙이기?

	// 회문 판별
	for (int i = 0; i < textLength; i++)
	{

	}
}