#include <stdio.h>
#include <limits.h> // 자료형의 최댓값과 최솟값이 정의된 헤더 파일

int main()
{
	// 부호 있는 정수의 최솟값
	char num1 = CHAR_MIN; // char 최솟값
	short num2 = SHRT_MIN; // short 최솟값
	int num3 = INT_MIN; // int 최솟값
	long num4 = LONG_MIN; // long 최솟값
	long long num5 = LLONG_MIN; // long long 최솟값

	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);

	return 0;
}