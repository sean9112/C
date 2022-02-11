#include <stdio.h>
#include <string.h>
int main()
{
    char input[1000];
    char ainput[1000], binput[1000];
    while (gets(input) != NULL)
    {
        int a = 0, b = 0, n = 0;
        a = (strlen(input) / 2) - 1;
        b = strlen(input) - a - 1;
        ainput[a + 1] = '\0';
        binput[a + 1] = '\0';
        while (a >= 0)
        {
            ainput[a] = input[a];
            binput[a] = input[b];
            a--;
            b++;
        }
        if (strcmp(ainput, binput) == 0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}