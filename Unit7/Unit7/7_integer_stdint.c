// 크기가 표시된 정수 자료형
// char, short, int, long, long long 같이 많으니까 헷갈림
// => 크기와 부호로만 표현

#include <stdio.h>
#include <stdint.h>

int main()
{
	// 부호있는 정수형 변수
	int8_t num1 = -128; // 8비트(1바이트) 크기
	int16_t num2 = 32767; // 16비트(2바이트) 크기
	int32_t num3 = 2147483647; // 32비트(4바이트) 크기
	int64_t num4 = 9223372036854775807; // 64비트(8바이트) 크기

	// int64_t만 %lld로 출력
	printf("%d %d %d %lld\n", num1, num2, num3, num4);

	// 부호없는 정수형 변수
	uint8_t num5 = 255;
	uint16_t num6 = 65535;
	uint32_t num7 = 4294967295;
	uint64_t num8 = 18446744073709551615;

	// int64_t만 %lld로 출력
	printf("%u %u %u %llu\n", num5, num6, num7, num8);

	return 0;
}