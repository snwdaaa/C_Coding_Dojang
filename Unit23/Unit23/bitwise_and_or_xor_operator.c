// ��Ʈ AND, OR, XOR ������

#include <stdio.h>

int main()
{
	unsigned char num1 = 1; // 0000 0001
	unsigned char num2 = 3; // 0000 0011

	printf("%d\n", num1 % num2); // 0000 0001
	printf("%d\n", num1 | num2); // 0000 0011
	printf("%d\n", num1 ^ num2); // 0000 0010  | xor -> �� ��Ʈ�� ���� �ٸ� �� 1

	return 0;
}