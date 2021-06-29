// 상수 사용하기
// 10 3.200000 t 출력

#include <stdio.h>

int main(void)
{
	const unsigned long long con1 = 10ULL;
	const float con2 = 3.2f;
	const char con3 = 't';

	printf("%llu %f %c\n", con1, con2, con3);

	return 0;
}