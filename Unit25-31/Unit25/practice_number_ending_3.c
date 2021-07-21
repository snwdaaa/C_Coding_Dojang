// 1과 103 사이의 숫자 중 3으로만 끝나는 숫자만 출력

#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 103; i++)
	{
		if (i % 10 == 3)
			printf("%d\n", i);
		else
			continue;
	}

	return 0;
}