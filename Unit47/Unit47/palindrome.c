// ȸ�� �Ǻ�
// ù ��° ���ڿ� ������ ���ڸ� �� -> ���� �������� ��������

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
	int inputSize; // ���ڿ��� ����
	char* str;
	bool isPalindrome = false; // ȸ�� ���θ� ���ϴ� �Ҹ��� ��

	int i, j;

	printf("�ܾ��� ������ ������ �Է��ϼ���: ");
	scanf("%d", &inputSize);

	str = (char*)malloc(sizeof(char) * (inputSize + 1)); // ���ڿ��� ���� + �ι��ڸ�ŭ �޸� ���� �Ҵ�

	printf("�ܾ �Է��ϼ���: ");
	scanf("%s", str);

	// ȸ�� �Ǻ�
	for (i = 0; i < (inputSize / 2); i++)
	{
		// ȸ���̸� isPalindrome�� true�� ������ ��, �ݺ��� ��� ����
		// ȸ���� �ƴϸ� isPalindrome�� false�� ������ �� �ݺ��� ����������
		if (str[i] == str[(inputSize - i) - 1]) // ȸ���� ��
		{
			isPalindrome = true;
		}
		else
		{
			isPalindrome = false;
			break;
		}
	}

	if (isPalindrome) printf("ȸ���Դϴ�.\n");
	else printf("ȸ���� �ƴմϴ�.\n");

	free(str);

	return 0;
}