#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i, a = 0;
        for (i = n - 2; i > 0; i--)
            a += 2 * i;
        printf("%d\n", a + 2 * n);
    }
}