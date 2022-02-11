#include <stdio.h>

main()
{
    int t;
    int a, b, c, d;

    scanf("%d", &t);
    for (int x = 1; x <= t; x++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (b - a == c - b && c - b == d - c)
            printf("%d %d %d %d %d\n", a, b, c, d, 2 * d - c);
        else if (b / a == c / b && c / b == d / c)
            printf("%d %d %d %d %d\n", a, b, c, d, d * (d / c));
    }
}