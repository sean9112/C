#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct poly
{
    int degree;
    int coef[MAX];
} POLY;

POLY Multiply(POLY A, POLY B)
{
    POLY C = {0};
    int i, j;
    for (i = B.degree; i >= 0; i--)
        for (j = A.degree; j >= 0; j--)
            C.coef[i + j] += A.coef[j] * B.coef[i];
    C.degree = A.degree + B.degree;
    return C;
}

int main()
{
    POLY A, B, C;
    int i;

    A.coef[0] = 1;
    A.coef[1] = 3;
    A.coef[2] = 4;
    A.degree = 2;
    B.coef[0] = -1;
    B.coef[1] = 2;
    B.degree = 1;

    C = Multiply(A, B);
    printf("%d\n", C.degree);
    for (i = C.degree; i >= 0; i--)
        printf("%d\t", C.coef[i]);
}