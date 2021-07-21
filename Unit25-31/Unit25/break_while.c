// break로 반복문 끝내기

#include <stdio.h>

int main(void)
{
	int num1 = 0;

	while (1)
	{
		num1++;

		printf("%d\n", num1);

		// num1이 100일 때 반복문으로부터 빠져나감
		if (num1 == 100)
			break;
	}

	return 0;
}