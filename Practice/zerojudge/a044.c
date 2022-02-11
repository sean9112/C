#include <stdio.h>

int r(int n)
{
    if (n > 0)
        return r(n - 1) + 1 + ((1 + n - 1) * (n - 1) / 2);
    else
        return 1;
}

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", r(n));
    }
}