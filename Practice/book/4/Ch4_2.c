#include <stdio.h>
#include <stdlib.h>
#include "Ch4_2.h"

int isQueue()
{
    if (front == rear)
        return 1;
    else
        return 0;
}

int enqueue(int d)
{
    if (rear >= MAXQUEUE)
        return 0;
    else
    {
        queue[++rear] = d;
        return 1;
    }
}

int dequeue()
{
    if (isQueueEmpty())
        return -1;
    else
        return queue[++front];
}

int main()
{
    int data[6] = {1, 2, 3, 4, 5, 6};
    int i;
    printf("存入佇列資料的順序");
    for (i = 0; i < 6; i++)
    {
        enqueue(data[i]);
        printf("[%d]", data[i]);
    }
    printf("\n取出佇列資料的順序:");
    while (!isQueueEmpty())
        printf("[%d]", dequeue());
    printf("\n");
    return 0;
}