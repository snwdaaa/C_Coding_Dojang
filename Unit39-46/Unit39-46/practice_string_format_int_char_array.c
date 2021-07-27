// 서식에 맞게 문자열 만들기
// 10 20 30 c 99 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[20];
	
	sprintf(s1, "%d %d %d %c %d", 10, 20, 30, 'c', 99);

	printf("%s\n", s1);

	return 0;
}