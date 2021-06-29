// 정수 리터럴 접미사
// 정수 리터럴의 크기를 명확하게 표기하기 위해 사용

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