// 특정 진법으로 표기된 문자열을 정수로 변환하기
// strtol(문자열, 끝포인터, 진법) (stdlib.h)
// 16진수로 표현된 문자열을 정수로 변환

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "0xaf10";
	int num1;

	num1 = strtol(s1, NULL, 16);

	printf("%x %d\n", num1, num1);

	return 0;
}