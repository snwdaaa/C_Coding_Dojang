// 플래그
// XOR 연산을 이용한 특정 비트 켜고 끄기 (토글)

#include <stdio.h>

int main()
{
	unsigned char flag = 7; // 0000 0111

	flag ^= 2; // 0000 0111 ^ 0000 0010 = 0000 0101     일곱 번째 비트는 1(플래그) 1(마스크) 이므로 0이 됨
	flag ^= 8; // 0000 0101 ^ 0000 1000 = 0000 1101    다섯 번째 비트는 1(플래그) 1(마스크) 이므로 0이 됨

	printf("%u\n", flag); // 0000 1101(2) = 13(10)

	// 비트가 켜져있는지 확인
	if (flag & 1)
		printf("0000 0001은 켜져 있음.\n");
	else
		printf("0000 0001은 꺼져 있음.\n");

	if (flag & 2)
		printf("0000 0010은 켜져 있음.\n");
	else
		printf("0000 0010은 꺼져 있음.\n");

	if (flag & 4)
		printf("0000 0100은 켜져 있음.\n");
	else
		printf("0000 0100은 꺼져 있음.\n");

	if (flag & 8)
		printf("0000 1000은 켜져 있음.\n");
	else
		printf("0000 1000은 꺼져 있음.\n");

	return 0;
}