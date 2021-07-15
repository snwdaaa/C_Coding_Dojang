// 플래그
// AND 연산을 이용한 특정 비트 끄기
// NOT 연산 후 AND 연산 -> AND 연산은 1 비트를 0으로 만들 수 없으므로 NOT 연산을 통해 반대로 바꿔준 후
// 그것에 대해 AND 연산을 실행하면 0과 1끼리 AND 연산을 하는 것이므로 해당 자리는 0으로 변한다(꺼진다)

#include <stdio.h>

int main(void)
{
	unsigned char flag = 7;	// 0000 0111

	flag &= ~2; // 0000 0111 & 1111 1101 = 0000 0101     일곱 번째 비트를 뒤집은 뒤 AND 연산을 해 비트를 꺼버림

	printf("%u\n", flag);

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

	return 0;
}