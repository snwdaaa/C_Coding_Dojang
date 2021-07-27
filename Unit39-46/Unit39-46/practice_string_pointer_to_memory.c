// "The Little Prince" Ãâ·Â

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* s1 = "The Little Prince";
	char* s2 = (char*)malloc(sizeof(char) * 20);

	strcpy(s2, s1);

	printf("%s\n", s2);

	free(s2);

	return 0;
}