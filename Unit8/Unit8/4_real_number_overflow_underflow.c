// �Ǽ��� �����÷ο�� ����÷ο�

#include <stdio.h>
#include <float.h>

int main(void)
{
	float num1 = FLT_MIN; // float ��� �ּڰ�
	float num2 = FLT_MAX; // float ��� �ִ�

	// ��� �ּڰ��� 100000000.0���� ������ ���� ���� ���� �ż� ����÷ο� �߻�
	num1 /= 100000000.0;

	// ��� �ִ񰪿� 1000.0�� ���ϸ� �����÷ο� �߻�
	num2 *= 1000.0;

	// �Ǽ��� ����÷ο�� 0, �����÷ο�� inf(���Ѵ�)
	printf("%e %e\n", num1, num2);

	return 0;
}