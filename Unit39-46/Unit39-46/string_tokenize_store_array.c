// 자른 문자열 보관하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "The Little Prince";
	char* sArr[10] = { NULL, }; // 문자열의 메모리 주소를 저장할 변수. NULL로 초기화

	int i = 0; // 문자열 포인터 배열 인덱스

	char* ptr = strtok(s1, " ");

	while (ptr != NULL)
	{
		// 자른 문자열 ptr을 sArr에 저장
		sArr[i] = ptr;
		i++;

		ptr = strtok(NULL, " "); // 다음 문자열 자르기
	}

	for (i = 0; i < 10; i++)
	{
		// sArr이 NULL이 아니면
		if (sArr[i] != NULL)
		{
			// 저장된 문자열 출력
			printf("%s\n", sArr[i]);
		}
	}

	return 0;
}