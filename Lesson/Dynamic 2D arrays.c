#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c, **a, i, j;

    scanf("%d%d", &r, &c);

    a = (int **)malloc(sizeof(int *) * r);

    for (i = 0; i < r; i++)
    {
        a[i] = (int *)malloc(sizeof(int) * c);
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            a[i][j] = i * c + j + 1;
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}