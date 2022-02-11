#include <stdio.h>
#include <stdlib.h>

typedef struct listNode *listPointer;
struct listNode
{
    int data;
    listPointer link;
};

void addq(listPointer *head, listPointer *tail, listPointer node)
{
    if (*head == NULL) //if *head is null
    {
        *head = node; // 將*head 設為 node
        *tail = node; //將 *tail 設為 node
    }
    else
    {
        (*tail)->link = node; // 將 *tail的link設為 node
        *tail = node;         // 將 *tail 改為 node
    }
}

int deleteq(listPointer *head, listPointer *tail)
{
    int temp;
    if (*head != NULL) // if *head 不為 NULL
    {
        temp = (*head)->data;  //取出 *head的data放到  temp
        *head = (*head)->link; // 將 *head 改為 *head的下一個 節點
        if (*head == NULL)     // if *head 已經是NULL
            *tail = NULL;      // *tail 也要改為 NULL
        return temp;           // 回傳 temp
    }
    return -1; //回傳-1
}

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

    printf("模擬QUEUE\n");
    listPointer head = NULL, tail = NULL;

    addq(&head, &tail, first);                      // add 第一個node
    printlist(head);                                // print queue
    addq(&head, &tail, second);                     // add 第二個node
    printlist(head);                                // printf queue
    addq(&head, &tail, third);                      // add 第三個node
    printlist(head);                                //printf queue
    system("pause");                                // syste("pause");
    printf("DeleteQ(%d)\n", deleteq(&head, &tail)); // delete queue
    printlist(head);
    printf("DeleteQ(%d)\n", deleteq(&head, &tail)); // delete queue
    printlist(head);
    printf("DeleteQ(%d)\n", deleteq(&head, &tail)); // delete queue
    printlist(head);
    system("pause"); // system("pause");
}
