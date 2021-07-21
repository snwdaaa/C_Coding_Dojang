// int ÃÖ´ñ°ª, long long ÃÖ´ñ°ª Ãâ·Â

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	int* numPtr1 = (int*)malloc(sizeof(int));
	long long* numPtr2 = (long long*)malloc(sizeof(long long));

	*numPtr1 = INT_MAX;
	*numPtr2 = LLONG_MAX;

	printf("%d\n", *numPtr1);
	printf("%lld\n", *numPtr2);

	free(numPtr1);
	free(numPtr2);

	return 0;
}