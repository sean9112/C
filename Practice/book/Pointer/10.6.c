#include <stdio.h>

void swap(int, int);

int main()
{
    int x = 15, y = 20;

    printf("交換前 x= %d y= %d\n", x, y);

    swap(x, y);

    printf("交換後 x= %d y= %d\n", x, y);

    return 0;
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}