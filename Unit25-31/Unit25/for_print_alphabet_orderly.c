// 문자 하나 입력. 그 문자부터 z까지 순서대로 알파벳 출력

#include <stdio.h>

int main(void)
{
	for (char ch = getch(); ch <= 'z'; ch++)
	{
		printf("%c", ch);
	}

	return 0;
}