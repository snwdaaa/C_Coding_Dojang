// ���ڿ����� Ư�� ���� �˻��ϱ�
// strchr(��� ���ڿ�, �˻��� ����)

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "A Garden Diary";

	char* ptr = strchr(s1, 'a');

	// �˻��� ���ڿ��� ���� ������ �ݺ�
	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strchr(ptr + 1, 'a'); // �����Ϳ� 1�� ���� ���� �ε������� �˻�
	}

	return 0;
}