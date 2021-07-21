// 정수를 입력. 정수를 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int* numPtr1;
	int** numPtr2;
	int num1;

	scanf("%d", &num1);

	numPtr1 = &num1;
	numPtr2 = &numPtr1; // 이중 포인터

	printf("%d\n", **numPtr2); // 이중 포인터 역참조

	return 0;
}