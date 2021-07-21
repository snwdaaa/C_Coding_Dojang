#include <stdio.h>

int main()
{
	int* numPtr; // 포인터 변수 선언
	int num1 = 10;

	numPtr = &num1; // 주소 저장

	*numPtr = 20;	// 역참조 연산

	printf("%d\n", *numPtr);
	printf("%d\n", num1);
}