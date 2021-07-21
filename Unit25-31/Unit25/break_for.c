// break로 for문 빠져나가기

#include <stdio.h>

int main(void)
{
	int num1 = 0;

	for (;;num1++)
	{
		printf("%d\n", num1);

		// num1이 100일 때 for문으로부터 탈출
		if (num1 == 100)
			break;
	}

	return 0;
}