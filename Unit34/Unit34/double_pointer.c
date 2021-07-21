// 이중 포인터
// 포인터의 메모리 주소를 저장함
// 포인터의 포인터

#include <stdio.h>

int main(void)
{
	int* numPtr1; // 단일 포인터
	int** numPtr2; // 이중 포인터
	int num1 = 10;

	numPtr1 = &num1;
	numPtr2 = &numPtr1; // 단일 포인터 변수의 주소를 저장

	printf("%d\n", **numPtr2); // **numPtr2 -> *numPtr1 -> 10

	return 0;
}