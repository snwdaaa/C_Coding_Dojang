// 문자열 복사하기

#define _CRT_SECURE_NO_WARNINGS // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "Hello";
	char s2[10];

	// s1의 문자열을 s2로 복사
	strcpy(s2, s1);

	printf("%s\n", s2);

	return 0;
}