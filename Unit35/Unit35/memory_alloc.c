// �޸� ���� �Ҵ�

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1 = 20;
	int* numPtr1;

	numPtr1 = &num1;

	int* numPtr2;

	numPtr2 = (int*)malloc(sizeof(int) * 1); // 4 ����Ʈ ���� �Ҵ�

	printf("%p\n", numPtr1);
	printf("%p\n", numPtr2);

	free(numPtr2);

	return 0;
}