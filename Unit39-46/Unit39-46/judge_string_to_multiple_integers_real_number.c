// 문자열을 정수와 실수로 변환하기
// 입력받은 16진 정수, 10진 정수, 실수로 된 문자열을 숫자로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s1[31];
	int num1, num2;
	float num3;
	char* end;

	scanf("%[^\n]s", s1);

	num1 = strtol(s1, &end, 16);
	num2 = strtol(end, &end, 10);
	num3 = strtof(end, &end);

	printf("0x%x\n", num1);
	printf("%d\n", num2);
	printf("%f\n", num3);
}