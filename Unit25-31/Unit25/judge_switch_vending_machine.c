// 입력 f, c, p 중 하나 -> 환타, 콜라, 포카리스웨트. 아무 문자도 해당 X면 "판매하지 않는 메뉴" 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char menu;

	scanf(" %c", &menu);

	switch (menu)
	{
	case 'f':
		printf("환타\n");
		break;
	case 'c':
		printf("콜라\n");
		break;
	case 'p':
		printf("포카리스웨트\n");
		break;
	default:
		printf("판매하지 않는 메뉴\n");
		break;
	}

	return 0;
}