// 2���� �迭�� ũ�� ���ϱ�

#include <stdio.h>

int main(void)
{
	int numArr[3][4] =
	{
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132},
	};
	
	printf("%d\n", sizeof(numArr)); // �� ĭ�� 4����Ʈ x 12�� = 48

	// ��
	int row = sizeof(numArr) / sizeof(numArr[0]); // ��ü ũ�⸦ �� �� ũ��� ����
	// ��
	int col = sizeof(numArr[0]) / sizeof(int); // �� �� ũ�⸦ �ڷ��� ũ��� ����

	printf("�� : %d\n", col);
	printf("�� : %d\n", row);

	return 0;
}