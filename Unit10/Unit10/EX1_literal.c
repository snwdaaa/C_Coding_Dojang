// ���ͷ� ����ϱ�

#include <stdio.h>

int main(void)
{
	printf("H%cllo, %s %d %Le\n", 'e', "World", 8, 4.9e-302L); //%Le -> ���� ǥ��� + long ũ�� => ���ͷ� ���̻� L

	return 0;
}