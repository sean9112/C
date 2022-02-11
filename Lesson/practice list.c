#include <stdio.h>
#include <stdlib.h>

typedef struct listNode *listPointer;
struct listNode
{
    int data;
    listPointer link;
};

void printlist(listPointer first)
{
    while (first != NULL)
    {
        printf("(%x,%d,%x)", first, first->data, first->link);
        first = first->link;
    };
    printf("\n");
}

int main()
{
    listPointer first, second, third;
    first = (listPointer)malloc(sizeof(*first));
    second = (listPointer)malloc(sizeof(*second));
    third = (listPointer)malloc(sizeof(*third));

    first->data = 10;
    first->link = NULL;
    second->data = 20;
    second->link = NULL;
    third->data = 30;
    third->link = NULL;

    printlist(first);
    first->link = second;
    printlist(first);
    second->link = third;
    printlist(first);
}
