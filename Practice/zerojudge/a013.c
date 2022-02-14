#include <stdio.h>
#include <math.h>

int roman_to_int(char *);
void int_to_roman(int);

int main()
{
    char n;
    char a[100], b[100];
    int c, d;
    while (1)
    {
        a[0] = '\0', b[0] = '\0';
        c = 0, d = 0;
        scanf("%s", a);
        if (a[0] == '#')
            break;
        scanf("%s", b);
        c = roman_to_int(a);
        d = roman_to_int(b);
        if (c - d == 0)
            printf("ZERO\n");
        else
            int_to_roman(abs(c - d));
    }
}

int roman_to_int(char *a)
{
    int i, n = 0, strlen;
    int b[100];
    for (i = 0; a[i] != '\0'; i++)
    {
        switch (a[i])
        {
        case 'I':
            b[i] = 1;
            break;
        case 'V':
            b[i] = 5;
            break;
        case 'X':
            b[i] = 10;
            break;
        case 'L':
            b[i] = 50;
            break;
        case 'C':
            b[i] = 100;
            break;
        case 'D':
            b[i] = 500;
            break;
        case 'M':
            b[i] = 1000;
            break;
        }
    }
    strlen = i - 1;

    for (i = 0; i < strlen; i++)
    {
        if (b[i] < b[i + 1])
            n -= b[i];
        else
            n += b[i];
    }
    n += b[strlen];
    return n;
}

void int_to_roman(int n)
{
    char a[100];
    int i;
    a[0] = '\0';
    while (n >= 1000)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'M';
        a[i + 1] = '\0';
        n -= 1000;
    }
    while (n >= 900)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'C';
        a[i + 1] = 'M';
        a[i + 2] = '\0';
        n -= 900;
    }
    while (n >= 500)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'D';
        a[i + 1] = '\0';
        n -= 500;
    }
    while (n >= 400)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'C';
        a[i + 1] = 'D';
        a[i + 2] = '\0';
        n -= 400;
    }
    while (n >= 100)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'C';
        a[i + 1] = '\0';
        n -= 100;
    }
    while (n >= 90)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'X';
        a[i + 1] = 'C';
        a[i + 2] = '\0';
        n -= 90;
    }
    while (n >= 50)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'L';
        a[i + 1] = '\0';
        n -= 50;
    }
    while (n >= 40)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'X';
        a[i + 1] = 'L';
        a[i + 2] = '\0';
        n -= 40;
    }
    while (n >= 10)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'X';
        a[i + 1] = '\0';
        n -= 10;
    }
    while (n >= 9)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'I';
        a[i + 1] = 'X';
        a[i + 2] = '\0';
        n -= 9;
    }
    while (n >= 5)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'V';
        a[i + 1] = '\0';
        n -= 5;
    }
    while (n >= 4)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'I';
        a[i + 1] = 'V';
        a[i + 2] = '\0';
        n -= 4;
    }
    while (n >= 1)
    {
        for (i = 0; a[i] != '\0'; i++)
            ;
        a[i] = 'I';
        a[i + 1] = '\0';
        n -= 1;
    }
    printf("%s\n", a);
}