// void ������ (���� ������)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1 = 10;
	int c1 = 'a';
	int* numPtr1 = &num1;
	char* cPtr1 = &c1;

	void* ptr; // void ������ -> ������ �ڷ����� ����

	// void �����ʹ� �ڷ����� �������� ���� Ư�� ������
	// ���� �ڷ����� ������ �� ����.
	// ���� �ڷ����� ��ȯ���� �ʾƵ� �Ͻ������� ��ȯ�ȴ�.
	ptr = numPtr1;
	ptr = cPtr1;

	numPtr1 = ptr;
	cPtr1 = ptr;

	return 0;
}