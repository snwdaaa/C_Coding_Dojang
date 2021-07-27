// sprintf 함수로 서식을 지정하여 문자열 만들기

#define _CRT_SECURE_NO_WARNINGS // sprintf 함수 보안 경고 방지
#include <stdio.h>

int main()
{
	char s1[20];

	sprintf(s1, "Hello, %s", "world!"); 
	// sprintf(배열, 서식, 값1, 값2, ...)
	// 서식에 값을 집어넣은 후, 배열에 저장한다.

	printf("%s\n", s1);

	return 0;
}