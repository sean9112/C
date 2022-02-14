#include <stdio.h>
#include <stdlib.h>

struct point
{
    float x, y;
};
typedef struct point PT;

PT midPT(PT a, PT b)
{
    PT m;

    m.x = (a.x + b.x) / 2;
    m.y = (a.y + b.y) / 2;

    return m;
}

int main()
{
    PT A, B, C;

    scanf("%f%f", &A.x, &A.y);
    scanf("%f%f", &B.x, &B.y);
    scanf("%f%f", &C.x, &C.y);

    PT mab = midPT(A, B), mbc = midPT(B, C), mac = midPT(A, C);

    printf("mab = (%g,%g), mbc = (%g, %g), mac = (%g, %g)", mab.x, mab.y, mbc.x, mbc.y, mac.x, mac.y);

    return 0;
}