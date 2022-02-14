#include <stdio.h>
#define MAX_COL 10
typedef struct mt
{
    int row, col, value;
} MT;

void transpose(MT *a, MT *b)
{
    int n, i, j, currentb;
    n = a[0].value;
    b[0].row = a[0].col;
    b[0].col = a[0].row;
    b[0].value = n;
    if (n > 0)
    {
        currentb = 1;
        for (i = 0; i < a[0].col; i++)
            for (j = 1; j <= n; j++)
                if (a[j].col == i)
                {
                    b[currentb].row = a[j].col;
                    b[currentb].col = a[j].row;
                    b[currentb].value = a[j].value;
                    currentb++;
                }
    }
}

void fastTranspose(MT *a, MT *b)
{
    int rowTerms[MAX_COL], startingPos[MAX_COL];
    int i, j, numCols = a[0].col, numTerms = a[0].value;
    b[0].row = numCols;
    b[0].col = a[0].row;
    b[0].value = numTerms;
    if (numTerms > 0)
    {
        for (i = 0; i < numCols; i++)
            rowTerms[i] = 0;
        for (i = 1; i <= numTerms; i++)
            rowTerms[a[i].col]++;
        startingPos[0] = 1;
        for (i = 1; i < numCols; i++)
            startingPos[i] = startingPos[i - 1] + rowTerms[i - 1];
        for (i = 1; i <= numTerms; i++)
        {
            j = startingPos[a[i].col]++;
            b[j].row = a[i].col;
            b[j].col = a[i].row;
            b[j].value = a[i].value;
        }
    }
}

int main()
{
    int i, j, count = 0;

    int m[6][6] = {{15, 0, 0, 22, 0, -15},
                   {0, 11, 3, 0, 0, 0},
                   {0, 0, 0, -6, 0, 0},
                   {0, 0, 0, 0, 0, 0},
                   {91, 0, 0, 0, 0, 0},
                   {0, 0, 28, 0, 0, 0}};

    for (i = 0; i < 6; i++)
        for (j = 0; j < 6; j++)
            if (m[i][j] != 0)
                count++;
    MT a[count + 1], b[count + 1];
    a[0].row = 6;
    a[0].col = 6;
    a[0].value = count;
    count = 1;
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            if (m[i][j] != 0)
            {
                a[count].row = i;
                a[count].col = j;
                a[count].value = m[i][j];
                count++;
            }
        }
    }
    for (i = 0; i <= 8; i++)
    {
        printf("%d\t%d\t%d\n", a[i].row, a[i].col, a[i].value);
    }
    printf("\n");

    // transpose(a, b);
    fastTranspose(a, b);

    for (i = 0; i <= 8; i++)
    {
        printf("%d\t%d\t%d\n", b[i].row, b[i].col, b[i].value);
    }
    printf("\n");
}