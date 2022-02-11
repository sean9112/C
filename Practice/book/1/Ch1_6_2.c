#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n)
{
    int fn;
    int fn2;
    int fn1;
    int i;
    if (n <= 1)
        printf("[%d]\n", n);
    else
    {
        fn2 = 0;
        fn1 = 1;
        printf("[0][1]");
        for (i = 2; i <= n; i++)
        {
            fn = fn2 + fn1;
            printf("[%d]", fn);
            fn2 = fn1;
            fn1 = fn;
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("請輸入數列頂數 ==> ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}