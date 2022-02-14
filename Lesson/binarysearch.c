#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE 101
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

void sort(int *list, int n)
{
    int i, j, min, temp;

    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (list[j] < list[min])
                min = j;

        SWAP(list[i], list[min], temp);
    }
}

int compare(int x, int y)
{
    if (x < y)
        return -1;
    else if (x == y)
        return 0;
    else
        return 1;
}

int binarysearch(int *list, int searchnum, int left, int right)
{
    int middle;

    while ((left <= right))
    {
        middle = (left + right) / 2;

        switch (compare(list[middle], searchnum))
        {
        case -1:
            left = middle + 1;
            break;
        case 0:
            return middle;
        case 1:
            right = middle - 1;
        }
    }
    return -1;
}

void main(void)
{
    int i, n, s, r;
    int list[MAX_SIZE];

    printf("Enter the number of numbers to generate: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        list[i] = rand() % 1000;
        printf("%d\t", list[i]);
    }
    sort(list, n);
    printf("\nSorted array:\n");

    for (i = 0; i < n; i++)
        printf("%d\t", list[i]);
    printf("\n");

    printf("Search: ");
    scanf("%d", &s);

    r = binarysearch(list, s, 0, n - 1);
    printf("%d\n", r);
}
