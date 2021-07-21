// 두 수 사이의 숫자 중 7로 끝나지 않는 숫자 출력하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);

	for (int i = num1; i <= num2; i++)
	{
		if (i % 10 == 7)
			continue;

		printf("%d\n", i);
	}

	return 0;
}