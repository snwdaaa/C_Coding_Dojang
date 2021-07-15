// 두 정수가 입력. 다음 조건대로 입력된 두 정수를 검사하여 결과를 출력하는 프로그램
// 1. 두 정수 AND 연산했을 때, 참이면 "참", 거짓이면 "거짓"
// 2. 두 정수 OR 연산했을 때, 참이면 "참", 거짓이면 "거짓"
// 3. 첫 번째 정수 NOT 연산했을 때, 참이면 "참", 거짓이면 "거짓"

#include <stdio.h>

int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	printf("%s\n", (num1 && num2) ? "참" : "거짓");
	printf("%s\n", (num1 || num2) ? "참" : "거짓");
	printf("%s\n", (!num1) ? "참" : "거짓");

	return 0;
}