// �־��� �������� ���� ������� ��ȣ �ֱ�
// ������ 6 ���
// 1. ����Ʈ ������
// 2. ���� ������
// 3. ���� ������.

#include <stdio.h>

int main(void)
{
	int num1 = 1;
	int num2 = 1;
	int num3;

	num3 = 2 * ((1 << num1) + (2 >> num2));

	printf("%d\n", num3);

	return 0;
}