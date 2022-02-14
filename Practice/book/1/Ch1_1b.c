#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10] = {81, 93, 77, 59, 69, 85, 90, 83, 100, 75};
    int sum = 0;
    float average;
    int i;
    for (i = 0; i < 10; i++)
        sum += t[i];
    average = sum / 10;
    printf("Total: %d\n", sum);
    printf("Average: %5.2f\n", average);
    return 0;
}