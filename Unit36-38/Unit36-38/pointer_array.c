#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* numPtr = (int*)malloc(sizeof(int) * 10);

	numPtr[0] = 10;
	numPtr[9] = 20;

	printf("%d\n%d\n", numPtr[0], numPtr[9]);

	free(numPtr);

	return 0;
}