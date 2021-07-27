// 서수 줄임말 문자열 만들기
// 1~7 사이 숫자와 길이 30 이하의 문자열 입력.
// 입력된 숫자의 서수 줄임말(1st, 2nd, 3rd...) 과 입력된 문자열 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	char name[31], result[40];

	scanf("%d %s", &number, name);

	switch (number)
	{
		case 1:
			sprintf(result, "%dst %s", number, name);
			break;
		case 2:
			sprintf(result, "%dnd %s", number, name);
			break;
		case 3:
			sprintf(result, "%drd %s", number, name);
			break;
		default:
			sprintf(result, "%dth %s", number, name);
			break;
	}

	printf("%s\n", result);

	return 0;
}