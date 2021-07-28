// 숫자를 문자열로 변환하기
// "98.415237 0x3fce1920" 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[30];
	float num1 = 98.415237f;
	int num2 = 0x3fce1920;

	sprintf(str, "%f 0x%x", num1, num2);

	printf("%s\n", str);

	return 0;
}