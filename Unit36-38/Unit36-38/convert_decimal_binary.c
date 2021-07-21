// 배열을 이용해 주어진 10진수 정수를 2진수 정수로 변환하는 프로그램

#include <stdio.h>

int main()
{
	int i = 0;

	int decimal = 13; // 10진수 정수
	int binary[20] = { 0, }; // 2진수를 저장할 배열

	while (1)
	{
		binary[i] = decimal % 2; // 나머지
		decimal = decimal / 2; // 몫
		i++;

		// 탈출 조건 => 몫이 0일 때
		if (decimal == 0) break;
		
	}

	// 변환 결과 출력
	int arrlen = sizeof(binary) / sizeof(int);
	
	for (int j = i-1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}

	return 0;
}