#include <stdio.h>

int main()
{
    char str[15] = "This is a pen.";
    char str1[15];
    char *ptr, *ptr1;
    int i = 0;

    ptr = str;
    ptr1 = str1;

    while (*ptr != '\0')
    {
        *(ptr1 + i) = *ptr++;
        i++;
    }
    *(ptr1 + i) = '\0';

    printf("將字串str複製到str1:\n");
    printf("str字串 = \"%s\"\n", str);
    printf("str1字串 = \"%s\"\n", str1);
    printf("ptr1 = \"%s\"\n", ptr1);

    return 0;
}