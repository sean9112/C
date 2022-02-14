#include <stdio.h>

main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n % 4 == 0)
        {
            if (n % 100 == 0)
            {
                if (n % 400 == 0)
                    printf("閏年\n");
                else
                    printf("平年\n");
            }
            else
                printf("閏年\n");
        }
        else
        {
            printf("平年\n");
        }
    }
}