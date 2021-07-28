// 지수적 표기법으로 적힌 문자열을 실수로 변환

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "3.e5";
	float num1;

	num1 = atof(s1);

	printf("%e %f", num1, num1);

	return 0;
}