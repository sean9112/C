#include <stdio.h>
#include <stdlib.h>

struct P
{
    int height;
    int weight;
    int age;
};

typedef struct P person;

int main()
{
    person **a;
    person *temp;
    int i, j, n;
    char b;
    printf("Enter the number of people\n");
    scanf("%d", &n);
    getchar();

    a = (person **)malloc(sizeof(person *) * n);

    for (i = 0; i < n; i++)
    {
        a[i] = (person *)malloc(sizeof(person));
    }

    for (i = 0; i < n; i++)
    {
        a[i]->height = (rand() % 200) + 1;
        a[i]->weight = (rand() % 100) + 1;
        a[i]->age = (rand() % 80) + 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("person[%d]: height=%d, weight=%d, age=%d\n", i, a[i]->height, a[i]->weight, a[i]->age);
    }

    printf("Choose mode that you want to sort\n");
    scanf("%c", &b);

    switch (b)
    {
    case '1':
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if ((a[i]->height) > (a[j]->height))
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        break;

    case '2':
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if ((a[i]->weight) > (a[j]->weight))
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        break;

    default:
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if ((a[i]->age) > (a[j]->age))
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }

    printf("Result:\n");

    for (i = 0; i < n; i++)
    {
        printf("person[%d]: height=%d, weight=%d, age=%d\n", i, a[i]->height, a[i]->weight, a[i]->age);
    }
}