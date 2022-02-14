#include <stdio.h>
#define LENGTH 5

double avg(int *, int);

int main()
{
    int i;
    double result;

    int tests[LENGTH];

    for (i = 0; i < LENGTH; i++)
    {
        printf("請輸入第%d位學生的成績 => ", (i + 1));
        scanf("%d", &tests[i]);
    }

    result = avg(tests, LENGTH);

    printf("成績平均: %f\n", result);

    return 0;
}

double avg(int *t, int len)
{
    int i;
    double sum = 0;

    for (i = 0; i < len; i++)
        sum = sum + *(t + i);

    return sum / len;
}