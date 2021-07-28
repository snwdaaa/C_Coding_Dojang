// 문자열을 정수로 바꾸기
// atoi(문자열) (stdlib.h)
// 성공하면 문자열을 정수로 반환, 실패하면 0 반환

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "283";
	int num1; // 정수로 바꾼 값을 저장할 변수

	num1 = atoi(s1);

	printf("%d\n", num1);

	return 0;
}