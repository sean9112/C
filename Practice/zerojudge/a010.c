#include <stdio.h>

int main()
{
    int a, n, i = 0;
    scanf("%d", &a);
    for (i = 2; i <= a; i++)
    {
        n = 0;
        while (a % i == 0)
        {
            a /= i;
            n++;
        }
        if (n == 1)
            printf("%d", i);
        else if (n > 1)
            printf("%d^%d", i, n);

        if (a != 1 && n != 0)
            printf(" * ");
    }
}