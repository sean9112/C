#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    scanf("%s", s);
    int i = strlen(s) - 1;
    while (s[i] == '0')
        i--;
    if (s[0] == '0')
        printf("0");
    else
    {
        while (i >= 0)
        {
            printf("%c", s[i]);
            i--;
        }
    }
}