// 실수의 오버플로우와 언더플로우

#include <stdio.h>
#include <float.h>

int main(void)
{
	float num1 = FLT_MIN; // float 양수 최솟값
	float num2 = FLT_MAX; // float 양수 최댓값

	// 양수 최솟값을 100000000.0으로 나누면 아주 작은 수가 돼서 언더플로우 발생
	num1 /= 100000000.0;

	// 양수 최댓값에 1000.0을 곱하면 오버플로우 발생
	num2 *= 1000.0;

	// 실수의 언더플로우는 0, 오버플로우는 inf(무한대)
	printf("%e %e\n", num1, num2);

	return 0;
}