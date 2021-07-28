// 실수를 문자열로 변환하기
// sprintf 함수 이용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[10];
	float num1 = 38.972340f;

	sprintf(s1, "%f", num1);

	printf("%s", s1);

	return 0;
}