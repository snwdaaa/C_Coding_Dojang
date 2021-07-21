// memset 함수
// memset(포인터, 설정할 값, 크기) : 주어진 포인터가 가리키는 메모리 공간의 내용을 원하는 크기만큼 특정 값으로 설정한다.
// string.h or memory.h에 정의

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	long long* numPtr = (long long*)malloc(sizeof(long long)); // 동적 할당

	memset(numPtr, 0x27, 8); // numPtr가 가리키는 8바이트 메모리 공간을 전부 0x27로 설정한다.

	printf("0x%llx\n", *numPtr);

	free(numPtr);

	return 0;
}