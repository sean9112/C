#include <stdio.h>

int main()
{
    int score = 85;
    int score1 = 72;
    int *ptr;

    ptr = &score;
    printf("變數score的值 = %d\n", score);
    printf("變數score的位址 = %p\n", &score);
    printf("指標ptr的值 = %p\n", ptr);
    printf("*ptr的值 = %d\n", *ptr);

    ptr = &score1;

    printf("變數score1的值 = %d\n", score1);
    printf("變數score1的位址 = %p\n", &score1);
    printf("更改指標ptr的值 = %p\n", ptr);
    printf("*ptr的值 = %d\n", *ptr);

    return 0;
}