// �迭�� ����� 2������ 10������ ���.

#include <stdio.h>

int main(void)
{
	int decimal = 0;
	int binary[4] = { 1,1,0,1 };
	int arrSize = sizeof(binary) / sizeof(int);

	for (int i = arrSize - 1; i >= 0; i--)
	{
		decimal += binary[i] * (1 << (arrSize - 1) - i);
	}

	printf("%d\n", decimal);

	return 0;
}