// �����÷ο� �߻� -> �ּڰ����� �ٽ� ����
#include <stdio.h>

int main()
{
	char num1 = 128; // char �ִ��� 127 �ʰ� -> �����÷ο� �߻� -> -128���� ����
	unsigned char num2 = 256; // unsigned char �ִ��� 255 �ʰ� -> �����÷ο� �߻� -> 0���� ����

	printf("%d %u\n", num1, num2);

	return 0;
}