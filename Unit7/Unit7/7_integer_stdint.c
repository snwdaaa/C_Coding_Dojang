// ũ�Ⱑ ǥ�õ� ���� �ڷ���
// char, short, int, long, long long ���� �����ϱ� �򰥸�
// => ũ��� ��ȣ�θ� ǥ��

#include <stdio.h>
#include <stdint.h>

int main()
{
	// ��ȣ�ִ� ������ ����
	int8_t num1 = -128; // 8��Ʈ(1����Ʈ) ũ��
	int16_t num2 = 32767; // 16��Ʈ(2����Ʈ) ũ��
	int32_t num3 = 2147483647; // 32��Ʈ(4����Ʈ) ũ��
	int64_t num4 = 9223372036854775807; // 64��Ʈ(8����Ʈ) ũ��

	// int64_t�� %lld�� ���
	printf("%d %d %d %lld\n", num1, num2, num3, num4);

	// ��ȣ���� ������ ����
	uint8_t num5 = 255;
	uint16_t num6 = 65535;
	uint32_t num7 = 4294967295;
	uint64_t num8 = 18446744073709551615;

	// int64_t�� %lld�� ���
	printf("%u %u %u %llu\n", num5, num6, num7, num8);

	return 0;
}