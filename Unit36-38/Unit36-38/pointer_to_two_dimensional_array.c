// 포인터 변수가 2차원 배열 가리키게 하기

#include <stdio.h>

int main(void)
{
	int numArr[3][4] =
	{
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132}
	};

	// 2차언 배열의 주소를 담기 위한 포인터 변수 선언
	// 자료형(*포인터변수이름)[가로크기] = 2차원 배열
	int(*numPtr)[4] = numArr;

	printf("%p\n", *numPtr); // 2차원 배열 포인터를 역참조하면 세로 첫 번째의 주소가 나옴
	printf("%p\n", *numArr); // 2차원 배열을 역참조하면 세로 첫 번째의 주소가 나옴

	printf("%d\n", numPtr[2][1]);
	printf("%d\n", numArr[2][1]);

	printf("%d\n", sizeof(numPtr));
	printf("%d\n", sizeof(numArr));

	return 0;
}