// �迭�� �̿��� �־��� 10���� ������ 2���� ������ ��ȯ�ϴ� ���α׷�

#include <stdio.h>

int main()
{
	int i = 0;

	int decimal = 13; // 10���� ����
	int binary[20] = { 0, }; // 2������ ������ �迭

	while (1)
	{
		binary[i] = decimal % 2; // ������
		decimal = decimal / 2; // ��
		i++;

		// Ż�� ���� => ���� 0�� ��
		if (decimal == 0) break;
		
	}

	// ��ȯ ��� ���
	int arrlen = sizeof(binary) / sizeof(int);
	
	for (int j = i-1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}

	return 0;
}