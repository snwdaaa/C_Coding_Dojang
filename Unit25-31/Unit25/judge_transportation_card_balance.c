// 1회 요금 1200원. 교통카드 사용할 때마다 잔액을 각 줄에 출력하는 프로그램
// 최초금액 출력 X, 잔액은 음수 X, 잔액이 부족하면 출력 끝냄

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int balance;

	scanf("%d", &balance);

	while (balance >= 1200)
	{
		balance -= 1200;
		printf("%d\n", balance);
	}

	return 0;
}