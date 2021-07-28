// 문자열을 실수로 변환하기
// atof(문자열) 함수
// 성공하면 변환된 실수 반환, 실패하면 0 반환

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "35.283672";
	float num1;

	num1 = atof(s1);

	printf("%f\n", num1);

	return 0;
}