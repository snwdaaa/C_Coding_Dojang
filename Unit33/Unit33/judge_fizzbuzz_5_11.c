// 정수 두 개 입력 -> 첫 번째 값(1~1000) 두 번째 값(10~1000), 첫 번쨰 입력 값은 두 번쨰 입력 값보다 항상 작음
// 첫 번째 정수부터 두 번째 정수까지 숫자를 출력
// 5의 배수일 때는 Fizz
// 11의 배수일 때는 Buzz
// 5와 11의 공배수일 때는 FizzBuzz

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	int i;

	do
	{
		scanf("%d %d", &num1, &num2);

		if(num1 >= num2)
			printf("첫 번째 값은 두 번째 값보다 작아야 합니다.\n");
	} while (num1 >= num2);

	for (i = num1; i <= num2; i++)
	{
		if ((i % 5 == 0) && (i % 11 == 0))
			printf("FizzBuzz\n");
		else if (i % 5 == 0)
			printf("Fizz\n");
		else if (i % 11 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
	}

	return 0;
}