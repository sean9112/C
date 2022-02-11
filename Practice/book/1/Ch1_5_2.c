#include <stdio.h>
#include <stdlib.h>

long factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int no = 0;
    char c;
    while (no != -1)
    {
        printf("請輸入階層數(-1結束)==> ");
        scanf("%d", &no);
        if (no > 0)
            printf("%d!函數的值: %ld\n", no, factorial(no));
    }
    return 0;
}