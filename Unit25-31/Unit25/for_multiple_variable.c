// for문 변수 두 개 사용
#include <stdio.h>

int main(void)
{
	for (int i = 0, j = 0; i < 10; i++, j += 2)
	{
		printf("i : %d, j : %d\n", i, j);
	}

	return 0;
}