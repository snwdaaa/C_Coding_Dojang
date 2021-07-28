// 문자열을 10진 정수로 변환하기
// 정수 20972 출력

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "20972";
	int num1;

	num1 = atoi(s1);

	printf("%d\n", num1);

	return 0;
}