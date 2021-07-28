// 여러 개의 정수로 된 문자열을 변환
//strtol 함수의 두 번째 인자는 여러 개의 정수를 변환할 때 사용된다.
// 처음 변환한 후, 해당 숫자의 끝부분의 주소를 두 번째 인자로 주어진 변수에 저장한다.

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = "0xaf10 42 0x27C 9952";
	int num1, num2, num3, num4;
	char* end; // 이전 숫자의 끝부분을 저장하기 위한 포인터

	num1 = strtol(s1, &end, 16);
	num2 = strtol(end, &end, 10);
	num3 = strtol(end, &end, 16);
	num4 = strtol(end, NULL, 10);

	printf("%x\n", num1);
	printf("%d\n", num2);
	printf("%X\n", num3);
	printf("%d\n", num4);

	return 0;
}