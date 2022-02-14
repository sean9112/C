#include <stdio.h>
#include <stdlib.h>
#define ROW 6
#define COLUMN 5

int main()
{
    int classes[30] = {0, 2, 0, 2, 0, 1, 4, 1, 4, 1, 5, 0, 5, 0, 5, 0, 0, 0, 0, 0, 3, 0, 3, 0, 3, 0, 0, 0, 0, 0};
    int sum = 0;
    int i, j;
    for (i = 0; i < 30; i++)
        printf("%d:%d ", i, classes[i]);
    printf("\n");
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COLUMN; j++)
            if (classes[i * COLUMN + j] != 0)
                sum++;

    printf("上課總節數: %d\n", sum);
    return 0;
}