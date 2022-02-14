#include <stdio.h>
#include <stdlib.h>
#include "Ch1_4.h"

static void maxvalue(void);
static void minvalue(void);
int var1, var2;
static int result;

static void maxvalue()
{
    if (var1 > var2)
        result = var1;
    else
        result = var2;
}

static void minvalue()
{
    if (var1 < var2)
        result = var1;
    else
        result = var2;
}

void cmpresult(int type)
{
    printf("Value1: %d\n", var1);
    printf("Value2: %d\n", var2);
    if (type == MAXCMP)
    {
        maxvalue();
        printf("MAX: %d\n", result);
    }
    else
    {
        minvalue();
        printf("min: %d\n", result);
    }
}