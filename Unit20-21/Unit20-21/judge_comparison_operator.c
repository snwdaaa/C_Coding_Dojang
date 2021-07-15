// 표준으로 문자가 입력. 다음 순서대로 입력된 문자를 검사하여 결과를 출력
// 1. 문자가 k와 다르면 "참", 같으면 "거짓"
// 2. 문자가 h보다 크면 "참", 작거나 같으면 "거짓"
// 3. 문자가 o보다 작거나 같으면 "참", 크면 "거짓"

#include <stdio.h>

int main(void)
{
	char ch;

	scanf(" %c", &ch);

	// 문자가 k와 다르면 "참", 같으면 "거짓"
	if (ch != 'k')
	{
		printf("%s", "참");
	}
	else
	{
		printf("%s", "거짓");
	}
	printf("\n");

	// 문자가 h보다 크면 "참", 작거나 같으면 "거짓"
	if (ch > 'h')
	{
		printf("%s", "참");
	}
	else
	{
		printf("%s", "거짓");
	}
	printf("\n");

	// 문자가 o보다 작거나 같으면 "참", 크면 "거짓"
	if (ch <= 'o')
	{
		printf("%s", "참");
	}
	else
	{
		printf("%s", "거짓");
	}
	printf("\n");

	return 0;
}