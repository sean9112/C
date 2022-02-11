#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float a, b, c;
    float d, e, f;

    scanf("%f %f %f", &a, &b, &c);

    d = pow(b, 2) - 4 * a * c;

    if (d == 0)
    {
        e = (-b) / (2 * a);
        if (e == -0)
            e = fabs(e);
        printf("Two same roots x=%g\n", e);
    }
    else if (d > 0)
    {
        e = (-b + pow(d, 0.5)) / (2 * a);
        f = (-b - pow(d, 0.5)) / (2 * a);
        if (e == -0)
            e = fabs(e);
        if (f == -0)
            f = fabs(e);
        printf("Two different roots x1=%g , x2=%g\n", e, f);
    }
    else
    {
        printf("No real root\n");
    }
}