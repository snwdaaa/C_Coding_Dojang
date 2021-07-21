// FizzBuzz
// 1. 1부터 100까지 출력
// 2. 3의 배수는 Fizz 출력
// 3. 5의 배수는 Buzz 출력
// 4. 3과 5의 공배수는 FizzBuzz 출력

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz\n");
		else if (i % 3 == 0)
			printf("Fizz\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
	}

	return 0;
}