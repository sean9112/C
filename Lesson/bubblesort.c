#include <stdio.h>
#include <stdlib.h>
#define swap(x, y, t) t = x, x = y, y = t

int main()
{
    int A[6] = {23, 78, 45, 8, 32, 56}, i, j, temp;
    for (i = 0; i <= 4; i++)
    {
        for (j = 5; j > i; j--)
        {
            if (A[j] < A[j - 1])
            {
                swap(A[j], A[j - 1], temp);
            }
        }
    }
    for (i = 0; i < 6; i++)
        printf("%d ", A[i]);
}