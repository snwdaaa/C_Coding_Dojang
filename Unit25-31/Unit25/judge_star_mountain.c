// 삼각형의 높이 입력(3~10), 입력된 높이만큼 산 모양으로 별 출력하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int height, i, j;

	scanf("%d", &height);

	for (i = 0; i < height; i++)
	{
		// 맨 아랫줄의 별 갯수 => 2i - 1
		// 맨 첫번째 줄의 공백 개수 height - 1 => height - (i+1)
		// 가운데는 항상 height번째
		for (j = 0; j < height + i; j++)
		{
			if (j < height-(i+1))
				printf(" ");
			else
				printf("*");

		}
		printf("\n");
	}
}