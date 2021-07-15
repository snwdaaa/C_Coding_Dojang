// 정수가 입력 -> 7과 다르면 1을 출력하고 같으면 2를 출력 (printf 함수 안에 삼항연산자 넣기)

#include <stdio.h>

int main(void)
{
	int num;

	scanf("%d", &num);

	printf("%d\n", (num == 7) ? 2 : 1);

	return 0;
}