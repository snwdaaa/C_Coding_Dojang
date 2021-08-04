// 회문 판별
// 첫 번째 글자와 마지막 글자를 비교 -> 점점 안쪽으로 좁혀나감

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
	int inputSize; // 문자열의 길이
	char* str;
	bool isPalindrome = false; // 회문 여부를 정하는 불리언 값

	int i, j;

	printf("단어의 문자의 개수를 입력하세요: ");
	scanf("%d", &inputSize);

	str = (char*)malloc(sizeof(char) * (inputSize + 1)); // 문자열의 길이 + 널문자만큼 메모리 동적 할당

	printf("단어를 입력하세요: ");
	scanf("%s", str);

	// 회문 판별
	for (i = 0; i < (inputSize / 2); i++)
	{
		// 회문이면 isPalindrome을 true로 설정한 후, 반복문 계속 진행
		// 회문이 아니면 isPalindrome을 false로 설정한 후 반복문 빠져나가기
		if (str[i] == str[(inputSize - i) - 1]) // 회문일 때
		{
			isPalindrome = true;
		}
		else
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome) printf("회문입니다.\n");
	else printf("회문이 아닙니다.\n");

	free(str);

	return 0;
}