// ǥ������ ���ڰ� �Է�. ���� ������� �Էµ� ���ڸ� �˻��Ͽ� ����� ���
// 1. ���ڰ� k�� �ٸ��� "��", ������ "����"
// 2. ���ڰ� h���� ũ�� "��", �۰ų� ������ "����"
// 3. ���ڰ� o���� �۰ų� ������ "��", ũ�� "����"

#include <stdio.h>

int main(void)
{
	char ch;

	scanf(" %c", &ch);

	// ���ڰ� k�� �ٸ��� "��", ������ "����"
	if (ch != 'k')
	{
		printf("%s", "��");
	}
	else
	{
		printf("%s", "����");
	}
	printf("\n");

	// ���ڰ� h���� ũ�� "��", �۰ų� ������ "����"
	if (ch > 'h')
	{
		printf("%s", "��");
	}
	else
	{
		printf("%s", "����");
	}
	printf("\n");

	// ���ڰ� o���� �۰ų� ������ "��", ũ�� "����"
	if (ch <= 'o')
	{
		printf("%s", "��");
	}
	else
	{
		printf("%s", "����");
	}
	printf("\n");

	return 0;
}