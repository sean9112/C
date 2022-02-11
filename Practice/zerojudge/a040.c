#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Bit(int a)
{
    int b = 0;
    for (b = 1; a >= 10; b++)
        a /= 10;
    return b;
}

int A(int a)
{
    int n = 0, b = 0, i = 0, j = 0, total = 0;

    b = Bit(a);

    int array1[b];

    for (i = b - 1, j = 0, n = a; i >= 0; i--, j++)
    {
        int p = pow(10, i);
        array1[j] = n / p;
        n %= p;
    }

    for (i = 0, n = 0; i < b; i++)
    {
        n = pow(array1[i], b);
        if (n > a)
            return 0;
        total += n;
    }
    if (total == a)
        return 1;
    else
        return 0;
}

int main()
{
    int m, n;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        int i, j = 0, array[1000000] = {0};
        for (i = n; i <= m; i++)
        {
            if (A(i) == 1)
            {
                array[j] = i;
                j++;
            }
        }
        if (j == 0)
            printf("none\n");
        else
        {
            for (i = 0; i < j; i++)
                printf("%d ", array[i]);
            printf("\n");
        }
    }
}