// 리터럴 사용하기

#include <stdio.h>

int main(void)
{
	printf("H%cllo, %s %d %Le\n", 'e', "World", 8, 4.9e-302L); //%Le -> 지수 표기법 + long 크기 => 리터럴 접미사 L

	return 0;
}