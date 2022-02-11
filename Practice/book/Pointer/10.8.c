#include <stdio.h>

int main()
{
    int tests[5] = {71, 83, 67, 49, 59};
    int *ptr, *ptr1;

    ptr = tests;
    ptr1 = &tests[0];

    printf("tests[0]的值 = %d\n", tests[0]);
    printf("tests[0]的位址 = %p\n", ptr1);
    printf("test的值 = %p\n", tests);
    printf("*ptr的值 = %d\n", *ptr);
    printf("*ptr1的值 = %d\n", *ptr1);

    return 0;
}