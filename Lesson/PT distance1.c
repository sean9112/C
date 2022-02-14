#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    float x, y;
};
typedef struct point PT;

float distance(PT A, PT B)
{
    float AB = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
    return AB;
}

int main()
{
    PT A, B, C;
    scanf("%f%f", &A.x, &A.y);
    scanf("%f%f", &B.x, &B.y);
    scanf("%f%f", &C.x, &C.y);
    float AB = distance(A, B), AC = distance(A, C), BC = distance(B, C);
    printf("AB = %g, BC = %g, AC = %g", AB, BC, AC);
    return 0;
}