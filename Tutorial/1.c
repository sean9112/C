#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    float x, y;
};
typedef struct point PT;

float distance(PT a, PT b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

PT middle(PT a, PT b)
{
    PT c;
    c.x = (a.x + b.x) / 2;
    c.y = (a.y + b.y) / 2;
    return c;
}

int main()
{
    PT A = {1, 3}, B = {-3, 4}, C = {7, -3};

    printf("AB間的距離:%g\n", distance(A, B));
    printf("BC間的距離:%g\n", distance(B, C));
    printf("AC間的距離:%g\n", distance(A, C));

    PT mab = middle(A, B), mbc = middle(B, C), mac = middle(A, C);

    printf("mab在 x = %g, y = %g\n", mab.x, mab.y);
    printf("mbc在 x = %g, y = %g\n", mbc.x, mbc.y);
    printf("mac在 x = %g, y = %g\n", mac.x, mac.y);

    return 0;
}