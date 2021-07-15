// 두 정수(unsigned int) 입력. 입력된 두 정수의 연산 결과를 각 줄에 출력하는 프로그램

#include <stdio.h>

int main(void)
{
	unsigned int num1, num2;

	// 두 정수 입력
	scanf("%u %u", &num1, &num2);

	// XOR 연산
	printf("%u\n", num1 ^ num2);

	// OR 연산
	printf("%u\n", num1 | num2);

	// AND 연산
	printf("%u\n", num1 & num2);

	// num1 NOT 연산
	printf("%u\n", ~num1);

	return 0;
}