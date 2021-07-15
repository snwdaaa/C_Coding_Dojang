// 자료형 크기 구하기
// 11 출력

#include <stdio.h>

int main(void)
{
	char num1;
	short num2;
	
	printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(long long));

	return 0;
}