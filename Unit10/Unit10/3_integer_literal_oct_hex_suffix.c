// 8����, 16���� ���� ���ͷ� ���̻�

#include <stdio.h>

int main(void)
{
	printf("0%lo\n", 017L); // longũ�� 8���� ����
	printf("0%lo\n", 017UL); // unsigned long ũ�� 8���� ����
	printf("0x%lx\n", 0x7FFFFFL); // long ũ�� 16���� ����
	printf("0x%lx\n", 0xFFFFFFFFUL); // unsigned long ũ�� 16���� ����

	return 0;
}