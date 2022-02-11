#include <stdio.h>

void AND(char *, char *, char *);

int main()
{
    char a[9], b[9], c[9];
    int i;

    scanf("%s", a);
    scanf("%s", b);

    AND(a, b, c);

    for (i = 0; i < 8; i++)
        printf("%c", c[i]);

    return 0;
}

void AND(char *a, char *b, char *c)
{
    int i;

    for (i = 0; i < 8; i++)
    {
        if (a[i] == '1' && b[i] == '1')
            c[i] = '1';
        else
            c[i] = '0';
    }
}