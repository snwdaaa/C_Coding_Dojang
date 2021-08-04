// 2-gram -> 2개의 연속된 요소를 추출

#include <stdio.h>
#include <string.h>

int main()
{
	char text[30] = "Hello";
	int length;

	length = strlen(text);

	// 2-gram이므로 문자열의 끝에서 한 글자 앞까지만 반복
	for (int i = 0; i < length - 1; i++)
	{
		printf("%c%c\n", text[i], text[i + 1]); // 현재 문자와 바로 다음 문자 출력
	}

	return 0;
}