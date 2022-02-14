#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t1 = 81, t2 = 93, t3 = 77, t4 = 59, t5 = 69;
    int t6 = 85, t7 = 90, t8 = 83, t9 = 100, t10 = 75;
    int sum;
    float average;
    sum = t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10;
    average = sum / 10;
    printf("Total: %d\n", sum);
    printf("Average: %5.2f\n", average);
    return 0;
}