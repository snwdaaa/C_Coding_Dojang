// 14가 출력되게 만들기
#include <stdio.h>

int main(void)
{
	short num1;
	long long num2;

	printf("%d\n", sizeof(num1) + sizeof(num2) + sizeof(int)); // 2 + 8 + 4 = 14

	return 0;
}