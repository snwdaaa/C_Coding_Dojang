// ������ ������ 2���� �迭 ����Ű�� �ϱ�

#include <stdio.h>

int main(void)
{
	int numArr[3][4] =
	{
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132}
	};

	// 2���� �迭�� �ּҸ� ��� ���� ������ ���� ����
	// �ڷ���(*�����ͺ����̸�)[����ũ��] = 2���� �迭
	int(*numPtr)[4] = numArr;

	printf("%p\n", *numPtr); // 2���� �迭 �����͸� �������ϸ� ���� ù ��°�� �ּҰ� ����
	printf("%p\n", *numArr); // 2���� �迭�� �������ϸ� ���� ù ��°�� �ּҰ� ����

	printf("%d\n", numPtr[2][1]);
	printf("%d\n", numArr[2][1]);

	printf("%d\n", sizeof(numPtr));
	printf("%d\n", sizeof(numArr));

	return 0;
}