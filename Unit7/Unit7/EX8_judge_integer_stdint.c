// 크기가 표시된 정수 자료형 사용하기
// -128 65535 0 9223372036854775807 출력

#include <stdio.h>
#include <stdint.h>

int main(void)
{
	int8_t num1 = INT8_MIN;
	uint16_t num2 = UINT16_MAX;
	uint32_t num3 = 0;
	int64_t num4 = INT64_MAX;

	printf("%d %u %u %lld\n", num1, num2, num3, num4);

	return 0;
}