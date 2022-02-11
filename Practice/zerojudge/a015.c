#include <stdio.h>

int main()
{
    int i, j;

    int A[100][100];

    while (scanf("%d%d", &i, &j) != EOF)
    {
        int AT[j][i];
        int x, y;
        for (x = 0; x < i; x++)
        {
            for (y = 0; y < j; y++)
            {
                scanf("%d", &A[x][y]);
            }
        }

        for (x = 0; x < i; x++)
        {
            for (y = 0; y < j; y++)
            {
                AT[y][x] = A[x][y];
            }
        }

        for (y = 0; y < j; y++)
        {
            for (x = 0; x < i; x++)
            {
                printf("%d", AT[y][x]);

                if (x != i - 1)
                    printf(" ");
            }
            printf("\n");
        }
    }
}