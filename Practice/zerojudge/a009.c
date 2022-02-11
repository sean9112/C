#include <stdio.h>

int main()
{
    char a[10000];
    int i;
    scanf("%s", a);

    for (i = 0; a[i] != '\0'; i++)
    {
        a[i] -= 7;
    }

    printf("%s", a);
}