// �� ����(unsigned int) �Է�. �Էµ� �� ������ ���� ����� �� �ٿ� ����ϴ� ���α׷�

#include <stdio.h>

int main(void)
{
	unsigned int num1, num2;

	// �� ���� �Է�
	scanf("%u %u", &num1, &num2);

	// XOR ����
	printf("%u\n", num1 ^ num2);

	// OR ����
	printf("%u\n", num1 | num2);

	// AND ����
	printf("%u\n", num1 & num2);

	// num1 NOT ����
	printf("%u\n", ~num1);

	return 0;
}