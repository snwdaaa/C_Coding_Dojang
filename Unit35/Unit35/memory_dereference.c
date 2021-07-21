// 할당한 메모리에 값 저장하기

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* numPtr;

	numPtr = (int*)malloc(sizeof(int));
	*numPtr = 10; // 역참조를 통한 값 할당

	printf("%d\n", *numPtr);

	free(numPtr);

	return 0;
}