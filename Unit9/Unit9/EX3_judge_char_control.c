// 제어 문자 사용허기
// Hello	World가 각 줄에 두 번씩 출력되게 만들기

#include <stdio.h>

int main(void)
{
	char c1;
	char c2;
	char c3;

	c1 = '\t';
	c2 = '\n';
	c3 = '\t';

	printf("Hello%cworld%cHello%cWorld", c1, c2, c3);

	return 0;
}