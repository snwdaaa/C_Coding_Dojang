// sprintf에 다양한 서식 지정자 사용 (문자열 배열)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[30];

	// 문자, 정수, 실수 -> 문자열
	sprintf(s1, "%c %d %f %e", 'a', 10, 3.2f, 1.123456e-21f);

	printf("%s\n", s1);

	return 0;
}