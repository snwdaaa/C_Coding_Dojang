// case 안에서 변수 선언
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1;

	scanf("%d", &num1);

	switch (num1)
	{
		// case 안에서 변수를 선언하려면 중괄호로 묶어준다.
		case 1:
		{
			int num2 = num1; // case 안에서 변수 선언 -> 에러 발생
			printf("%d입니다.\n", num2);
			break;
		}
		case 2:
			printf("2입니다.\n");
			break;
		default:
			printf("default\n");
			break;
	}
}