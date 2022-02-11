#include <stdio.h>
#include <stdlib.h>

struct person
{
    float height, weight, age;
};
typedef struct person ps;

int main()
{
    int n, i, j, s;
    float temp;
    printf("How many people: ");
    scanf("%d", &n);
    ps *a;
    a = (ps *)malloc(sizeof(ps) * n);

    for (i = 0; i < n; i++)
    {
        printf("height[%d]: ", i);
        scanf("%f", &a[i].height);
        printf("weight[%d]: ", i);
        scanf("%f", &a[i].weight);
        printf("How old[%d]: ", i);
        scanf("%f", &a[i].age);
    }

    printf("sort: ");
    scanf("%d", &s);

    switch (s)
    {
    case 1:
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i].height > a[j].height)
                {
                    temp = a[i].height;
                    a[i].height = a[j].height;
                    a[j].height = temp;
                }
            }
        }
        break;
    case 2:
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i].weight > a[j].weight)
                {
                    temp = a[i].weight;
                    a[i].weight = a[j].weight;
                    a[j].weight = temp;
                }
            }
        }
        break;

    default:
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i].age > a[j].age)
                {
                    temp = a[i].age;
                    a[i].age = a[j].age;
                    a[j].age = temp;
                }
            }
        }
        break;
    }

    for (i = 0; i < n; i++)
    {
        printf("a[%d].height = %g, a[%d].weight = %g, a[%d].age = %g\n", i, a[i].height, i, a[i].weight, i, a[i].age);
    }
}