// ������ ���Ե� ȸ�� �Ǻ�
// ���� 30 ������ ���� ���ڿ� �Է� (���� ������ ���� ����)
// �Էµ� ���ڿ��� ȸ���̸� 1, �ƴϸ� 0 ���

//ȸ�� �˻��ϴٰ� ���� ������ index + 1 �Ѵ����� continue

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char inputText[31];
	char unSpacedText[31]; // inputText���� ������ ������ ���ڿ�
	int inputTextLength;
	bool isPalindrome = true;

	int i = 0;

	scanf("%[^\n]s", inputText);

	inputTextLength = strlen(inputText);

	while (i < inputTextLength)
	{
		// ���� ������ �ǳʶٱ�
		if (inputText[i] == " ")
		{
			continue;
		}
		else
		{
			unspacedText[i] = inputText[i]
		}
	}

	// ������ �������� �ɰ� ��, strcat���� �̾���̱�?

	// ȸ�� �Ǻ�
	for (int i = 0; i < textLength; i++)
	{

	}
}