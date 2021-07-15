// 불 자료형과 논리 연산자

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	printf("%d\n", true && true);
	printf("%d\n", true && false);
	printf("%d\n", false && true);
	printf("%d\n", false && false);

	printf("%d\n", true || true);
	printf("%d\n", true || false);
	printf("%d\n", false || true);
	printf("%d\n", false || false);

	return 0;
}