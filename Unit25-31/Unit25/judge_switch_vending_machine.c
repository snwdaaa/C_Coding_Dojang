// �Է� f, c, p �� �ϳ� -> ȯŸ, �ݶ�, ��ī������Ʈ. �ƹ� ���ڵ� �ش� X�� "�Ǹ����� �ʴ� �޴�" ���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char menu;

	scanf(" %c", &menu);

	switch (menu)
	{
	case 'f':
		printf("ȯŸ\n");
		break;
	case 'c':
		printf("�ݶ�\n");
		break;
	case 'p':
		printf("��ī������Ʈ\n");
		break;
	default:
		printf("�Ǹ����� �ʴ� �޴�\n");
		break;
	}

	return 0;
}