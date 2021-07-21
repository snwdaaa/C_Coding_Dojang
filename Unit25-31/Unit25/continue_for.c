// continue를 이용해 일부 코드를 실행하지 않고 뛰어넘기

#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		// 홀수 출력 뛰어넘기
		if (i % 2 != 0)
			continue;

		printf("%d\n", i);
	}

	return 0;
}