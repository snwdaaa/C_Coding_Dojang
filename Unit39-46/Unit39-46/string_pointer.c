#include <stdio.h>

int main()
{
	char c1 = 'a';
	// 문자열은 문자의 포인터로 저장
	// 문자열 자체가 s1에 저장되는 것이 아니라 문자열 리터럴이 있는 곳의 메모리 주소가 저장
	char* s1 = "Hello";

	printf("%c\n", c1);
	printf("%s\n", s1);

	return 0;
}