// 주어진 연산자의 실행 순서대로 괄호 넣기
// 맞으면 6 출력
// 1. 시프트 연산자
// 2. 덧셈 연산자
// 3. 곱셈 연산자.

#include <stdio.h>

int main(void)
{
	int num1 = 1;
	int num2 = 1;
	int num3;

	num3 = 2 * ((1 << num1) + (2 >> num2));

	printf("%d\n", num3);

	return 0;
}