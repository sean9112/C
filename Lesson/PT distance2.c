#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    float x, y, d;
};
typedef struct point PT;

float distance(PT A, PT B)
{
    float d = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
    return d;
}

int main()
{
    PT a[5], O = {0}, F = {0};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("輸入第%d個座標的X: ", i + 1);
        scanf("%f", &a[i].x);
        printf("輸入第%d個座標的Y: ", i + 1);
        scanf("%f", &a[i].y);
        a[i].d = distance(a[i], O);
    }

    for (i = 0; i < 5; i++)
        if (a[i].d > F.d)
            F = a[i];

    printf("距離原點最遠的座標: (%g, %g), 距離: %g\n", F.x, F.y, F.d);

    return 0;
}