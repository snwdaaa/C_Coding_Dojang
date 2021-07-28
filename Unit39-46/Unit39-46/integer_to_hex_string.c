// 정수(16진수)를 문자열로 변환하기
// sprintf 함수 이용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[10];
	int num1 = 283;

	sprintf(s1, "0x%x", num1);

	printf("%s", s1);

	return 0;
}