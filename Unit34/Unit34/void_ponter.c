// void 포인터 (범용 포인터)

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1 = 10;
	int c1 = 'a';
	int* numPtr1 = &num1;
	char* cPtr1 = &c1;

	void* ptr; // void 포인터 -> 정해진 자료형이 없음

	// void 포인터는 자료형이 정해지지 않은 특성 때문에
	// 여러 자료형을 저장할 수 있음.
	// 직접 자료형을 변환하지 않아도 암시적으로 변환된다.
	ptr = numPtr1;
	ptr = cPtr1;

	numPtr1 = ptr;
	cPtr1 = ptr;

	return 0;
}