// �����Ϳ� �Ҵ�� �޸𸮸� 2���� �迭ó�� ���
// ���� ������ -> ������ �迭 -> ������ �迭�� �� ���ҵ鿡 �޸� ���� �Ҵ�

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// ���� ������
	int** doublePtr = (int**)malloc(sizeof(int*) * 3);

	// ������ �迭
	for (int i = 0; i < 3; i++)
	{
		doublePtr[i] = (int*)malloc(sizeof(int) * 4);
	}

	doublePtr[0][0] = 1;
	doublePtr[2][0] = 5;
	doublePtr[2][3] = 2;

	printf("%d\n", doublePtr[0][0]);
	printf("%d\n", doublePtr[2][0]);
	printf("%d\n", doublePtr[2][3]);

	for (int i = 0; i < 3; i++)
	{
		free(doublePtr[i]);
	}

	free(doublePtr);

	return 0;
}