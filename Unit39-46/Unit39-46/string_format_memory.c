// 서식 지정해서 문자열 포인터에 문자열 만들기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = (char*)malloc(sizeof(char) * 20); // 메모리 동적 할당

	sprintf(s1, "Hello, %s", "world!"); // 서식을 Hello, %s로 지정 후 s1에 저장

	printf("%s\n", s1);

	free(s1);

	return 0;
}