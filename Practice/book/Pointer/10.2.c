#include <stdio.h>

int main()
{
    int score = 85;
    int *ptr;

    ptr = &score;

    printf("變數score的值 = %d\n", score);
    printf("變數score的位址 = %p\n", &score);
    printf("指標ptr的值 = %p\n", ptr);
    printf("指標ptr的位址 = %p\n", &ptr);

    return 0;
}