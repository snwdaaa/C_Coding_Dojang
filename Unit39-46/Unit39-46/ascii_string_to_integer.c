// ���ڿ��� ������ �ٲٱ�
// atoi(���ڿ�) (stdlib.h)
// �����ϸ� ���ڿ��� ������ ��ȯ, �����ϸ� 0 ��ȯ

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "283";
	int num1; // ������ �ٲ� ���� ������ ����

	num1 = atoi(s1);

	printf("%d\n", num1);

	return 0;
}