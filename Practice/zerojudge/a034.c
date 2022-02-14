#include <stdio.h>

int main()
{
    int n, s[1000];
    while (scanf("%d", &n) != EOF)
    {
        int i;

        for (i = 0; n != 1; i++)
        {
            s[i] = n % 2;
            n /= 2;
        }
        s[i] = 1;

        while (i >= 0)
        {
            printf("%d", s[i]);
            i--;
        }
        printf("\n");
    }
    return 0;
}