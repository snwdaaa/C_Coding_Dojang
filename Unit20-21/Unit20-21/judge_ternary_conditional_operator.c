// ������ �Է� -> 7�� �ٸ��� 1�� ����ϰ� ������ 2�� ��� (printf �Լ� �ȿ� ���׿����� �ֱ�)

#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	printf("%d\n", (num == 7) ? 2 : 1);

	return 0;
}