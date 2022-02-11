#include <stdio.h>

int main()
{
    char str[15] = "This is a pen.";
    char str1[15] = "hello! world";
    char *ptr, *ptr1;

    ptr = str;
    ptr1 = "This is an apple.";

    printf("str字串 = \"%s\"\n", str);
    printf("str1字串 = \"%s\"\n", str1);
    printf("ptr = \"%s\"\n", ptr);
    printf("ptr1 = \"%s\"\n", ptr1);

    ptr1 = str1;

    printf("更改後ptr1 = \"%s\"\n", ptr1);

    return 0;
}