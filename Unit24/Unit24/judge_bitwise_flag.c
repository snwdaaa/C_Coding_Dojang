// 두 정수 입력 (0~255), 플래그에 다음 연산해서 결과 출력
// 1. num1 비트를 왼쪽으로 3번 이동한 값으로 flag의 비트 켜기
// 2. num2 비트를 오른쪽으로 2번 이동한 값으로 flag의 비트 끄기
// 3. flag의 첫 번째 비트 토글하기

#include <stdio.h>

int main(void)
{
	unsigned char flag = 16;
	unsigned char num1, num2;

	scanf("%hhu %hhu", &num1, &num2);

	flag |= (num1 << 3);
	flag &= ~(num2 >> 2);
	flag ^= (1 << 7);

	printf("%u\n", flag);

	return 0;
}