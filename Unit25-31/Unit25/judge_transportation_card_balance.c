// 1ȸ ��� 1200��. ����ī�� ����� ������ �ܾ��� �� �ٿ� ����ϴ� ���α׷�
// ���ʱݾ� ��� X, �ܾ��� ���� X, �ܾ��� �����ϸ� ��� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int balance;

	scanf("%d", &balance);

	while (balance >= 1200)
	{
		balance -= 1200;
		printf("%d\n", balance);
	}

	return 0;
}