// 길이 30 이하의 두 개의 문자열 입력. 두 문자열이 같은지 다른지 비교 결과 정수로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 30);
	char* s2 = (char*)malloc(sizeof(char) * 30);

	printf("두 문자열을 입력하세요(공백으로 구분): ");
	scanf("%s %s", s1, s2);

	printf("%d\n", strcmp(s1, s2));

	free(s1);
	free(s2);

	return 0;
}