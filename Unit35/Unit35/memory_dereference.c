// �Ҵ��� �޸𸮿� �� �����ϱ�

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* numPtr;

	numPtr = (int*)malloc(sizeof(int));
	*numPtr = 10; // �������� ���� �� �Ҵ�

	printf("%d\n", *numPtr);

	free(numPtr);

	return 0;
}