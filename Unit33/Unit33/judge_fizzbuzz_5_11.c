// ���� �� �� �Է� -> ù ��° ��(1~1000) �� ��° ��(10~1000), ù ���� �Է� ���� �� ���� �Է� ������ �׻� ����
// ù ��° �������� �� ��° �������� ���ڸ� ���
// 5�� ����� ���� Fizz
// 11�� ����� ���� Buzz
// 5�� 11�� ������� ���� FizzBuzz

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	int i;

	do
	{
		scanf("%d %d", &num1, &num2);

		if(num1 >= num2)
			printf("ù ��° ���� �� ��° ������ �۾ƾ� �մϴ�.\n");
	} while (num1 >= num2);

	for (i = num1; i <= num2; i++)
	{
		if ((i % 5 == 0) && (i % 11 == 0))
			printf("FizzBuzz\n");
		else if (i % 5 == 0)
			printf("Fizz\n");
		else if (i % 11 == 0)
			printf("Buzz\n");
		else
			printf("%d\n", i);
	}

	return 0;
}