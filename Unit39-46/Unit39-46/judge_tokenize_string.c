// 길이 60 이하의 인터넷 도메인이 입력.
// 점(.)을 기준으로 문자열을 분리한 후, 각 줄마다 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char domain[61];

	// 도메인 입력
	scanf("%s", domain);

	// 점을 기준으로 분리한 후, 각 줄마다 출력
	char* strToken = strtok(domain, ".");

	while (strToken != NULL)
	{
		printf("%s\n", strToken);
		strToken = strtok(NULL, ".");
	}

	return 0;
}