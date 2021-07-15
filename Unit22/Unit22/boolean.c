// boolean -> stdbool.h에 정의

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool b1 = true;

	if (b1 == true)
		printf("참\n");
	else
		printf("거짓\n");

	return 0;
}