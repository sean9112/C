#include <stdio.h>

int main()
{
	int A[4][4] = {{5, 9, 3, 4}, {6, 8, 2, 1}, {16, 0, -27, 0}, {28, 17, 39, 19}}, B[4][4] = {0}, c[4][4] = {0};
	int i, j, k, counter = 0;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			B[i][j] = A[j][i];
		}
	}

	printf("A:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}

	printf("B:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d\t", B[i][j]);
		}
		printf("\n");
	}

	printf("C:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			for (k = 0; k < 4; k++)
			{
				c[i][j] += A[i][k] * B[k][j];
				counter++;
			}
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	printf("counter = %d\n", counter);
}
