// �� ���� �Է� (0~255), �÷��׿� ���� �����ؼ� ��� ���
// 1. num1 ��Ʈ�� �������� 3�� �̵��� ������ flag�� ��Ʈ �ѱ�
// 2. num2 ��Ʈ�� ���������� 2�� �̵��� ������ flag�� ��Ʈ ����
// 3. flag�� ù ��° ��Ʈ ����ϱ�

#include <stdio.h>

int main(void)
{
	unsigned char flag = 16;
	unsigned char num1, num2;

	scanf("%hhu %hhu", &num1, &num2);

	flag |= (num1 << 3);
	flag &= ~(num2 >> 2);
	flag ^= (1 << 7);

	printf("%u\n", flag);

	return 0;
}