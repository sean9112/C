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
        *head = node; // �N*head �]�� node
        *tail = node; //�N *tail �]�� node
    }
    else
    {
        (*tail)->link = node; // �N *tail��link�]�� node
        *tail = node;         // �N *tail �אּ node
    }
}

int deleteq(listPointer *head, listPointer *tail)
{
    int temp;
    if (*head != NULL) // if *head ���� NULL
    {
        temp = (*head)->data;  //���X *head��data���  temp
        *head = (*head)->link; // �N *head �אּ *head���U�@�� �`�I
        if (*head == NULL)     // if *head �w�g�ONULL
            *tail = NULL;      // *tail �]�n�אּ NULL
        return temp;           // �^�� temp
    }
    return -1; //�^��-1
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

    printf("����QUEUE\n");
    listPointer head = NULL, tail = NULL;

    addq(&head, &tail, first);                      // add �Ĥ@��node
    printlist(head);                                // print queue
    addq(&head, &tail, second);                     // add �ĤG��node
    printlist(head);                                // printf queue
    addq(&head, &tail, third);                      // add �ĤT��node
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
