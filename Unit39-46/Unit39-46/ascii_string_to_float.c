// ���ڿ��� �Ǽ��� ��ȯ�ϱ�
// atof(���ڿ�) �Լ�
// �����ϸ� ��ȯ�� �Ǽ� ��ȯ, �����ϸ� 0 ��ȯ

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "35.283672";
	float num1;

	num1 = atof(s1);

	printf("%f\n", num1);

	return 0;
}