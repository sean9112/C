#include <stdio.h>

int main()
{
    int tests[5] = {71, 83, 67, 49, 59};
    int *ptr, *ptr1;

    ptr = tests;
    ptr1 = &tests[4];

    printf("test[0]的值 = %d\n", tests[0]);
    printf("tests[0]的位址 = %p\n", ptr1);
    printf("ptr+1的值 = %p\n", ptr + 1);
    printf("*(ptr+1)的值 = %d\n", *(ptr + 1));
    printf("ptr+2的值 = %p\n", ptr + 2);
    printf("*(ptr+2)的值 = %d\n", *(ptr + 2));
    printf("ptr1~ptr之間的元素數 = %ld\n", ptr1 - ptr);

    return 0;
}