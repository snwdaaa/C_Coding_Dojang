// 메모리 동적 할당

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1 = 20;
	int* numPtr1;

	numPtr1 = &num1;

	int* numPtr2;

	numPtr2 = (int*)malloc(sizeof(int) * 1); // 4 바이트 동적 할당

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);

	free(numPtr2);

	return 0;
}