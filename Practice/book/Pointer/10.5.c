#include <stdio.h>

int main()
{
    int score = 85;
    int *ptr;

    ptr = &score;

    printf("變數score的值 = %d\n", score);
    printf("變數score的位址 = %p\n", &score);
    printf("*ptr的值 = %d\n", *ptr);

    *ptr = 60;

    printf("更改*ptr的值成為60\n");
    printf("變數score的值 = %d\n", score);
    printf("*ptr的值 = %d\n", *ptr);

    return 0;
}