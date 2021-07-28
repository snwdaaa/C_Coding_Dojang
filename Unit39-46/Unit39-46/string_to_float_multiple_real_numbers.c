// strtof 함수
// 여러 실수가 있는 문자열을 여러 변수에 저장한다.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "35.283672 3.e5 9.281172 7.e-5";
	float num1, num2, num3, num4;
	char* end;

	num1 = strtof(s1, &end);
	num2 = strtof(end, &end);
	num3 = strtof(end, &end);
	num4 = strtof(end, NULL);

	printf("%f\n%e\n%f\n%e", num1, num2, num3, num4);

	return 0;
}