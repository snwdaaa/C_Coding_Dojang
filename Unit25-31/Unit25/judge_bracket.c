// 세 정수 입력. 다음 순서대로 연산한 뒤 결과 출력
// 1. num1 + num2
// 2. 1번 결과 * 10
// 3. 2번 결과 - num3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d\n", ((num1 + num2) * 10) - num3);

	return 0;
}