// memset �Լ�
// memset(������, ������ ��, ũ��) : �־��� �����Ͱ� ����Ű�� �޸� ������ ������ ���ϴ� ũ�⸸ŭ Ư�� ������ �����Ѵ�.
// string.h or memory.h�� ����

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long* numPtr = (long long*)malloc(sizeof(long long)); // ���� �Ҵ�

	memset(numPtr, 0x27, 8); // numPtr�� ����Ű�� 8����Ʈ �޸� ������ ���� 0x27�� �����Ѵ�.

	printf("0x%llx\n", *numPtr);

	free(numPtr);

	return 0;
}