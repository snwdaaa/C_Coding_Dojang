// ���� ���ͷ� ���̻�
// ���� ���ͷ��� ũ�⸦ ��Ȯ�ϰ� ǥ���ϱ� ���� ���

#include <stdio.h>

int main(void)
{
	printf("%ld\n", -10L); // long -> L
	printf("%lld\n", -1234567890123456789LL); // long long -> LL

	printf("%u\n", 10U); // unsigned int -> U
	printf("%lu\n", 1234567890UL); // unsigned long -> UL

	printf("%lu\n", 10UL); // unsigned long -> UL
	printf("%llu\n", 1234567890123456789ULL); // unsigned long long -> ULL

	return 0;
}