#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, k, A[7] = {62, 42, 13, 57, 8, 60, 73}, HASH[13] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

	for (i = 0; i < 7; i++)
	{
		k = A[i] % 13;
		while (HASH[k] != -1)
			k = (k + 1) % 13;
		HASH[k] = A[i];
	}
	for (i = 0; i < 13; i++)
	{
		printf("%d ", HASH[i]);
	}
	printf("\n");
}
