// 2차원 배열의 크기 구하기

#include <stdio.h>

int main(void)
{
	int numArr[3][4] =
	{
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132},
	};
	
	printf("%d\n", sizeof(numArr)); // 한 칸당 4바이트 x 12개 = 48

	// 행
	int row = sizeof(numArr) / sizeof(numArr[0]); // 전체 크기를 한 줄 크기로 나눔
	// 열
	int col = sizeof(numArr[0]) / sizeof(int); // 한 줄 크기를 자료형 크기로 나눔

	printf("열 : %d\n", col);
	printf("행 : %d\n", row);

	return 0;
}