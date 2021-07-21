// continue를 이용한 코드 실행 건너뛰기

#include <stdio.h>

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		i++;

		// 홀수면 실행 건너뛰기
		if (i % 2 != 0)
			continue;

		printf("%d\n", i);
	}

	return 0;
}