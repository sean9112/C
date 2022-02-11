#include <stdio.h>
#include <stdlib.h>
#define N 6

typedef struct listNode *listPointer;
struct listNode
{
    int data;
    listPointer link;
};

void insert(listPointer *head, listPointer newnode)
{
    if (*head == NULL)                      // if *head 是 NULL
        *head = newnode;                    // *head 設為 newnode
    else if ((*head)->data < newnode->data) // if *head的data小於newnode的data
        insert(&((*head)->link), newnode);  // 用*head的 link和 newnode 呼叫insert()
    else
    {
        newnode->link = *head; // newnode的link設為*head
        *head = newnode;       // *head 改為 newnode
    }
}

void printlist(listPointer head)
{
    while (head != NULL) // head 不是NULL
    {
        printf("%3d", head->data); //print head的data
        head = head->link;         // head改為 head的link
    }
}
int main()
{
    int a[N] = {23, 78, 45, 8, 32, 56};
    int i, j, temp;
    listPointer newnode, head = NULL;

    printf("\nAfter Sorting\n");

    for (i = 0; i < N; i++) // 回合數
    {
        newnode = (listPointer)malloc(sizeof(*newnode)); //配置一個節點空間給newnode
        newnode->data = a[i];                            // newnode的data設為a[i]
        newnode->link = NULL;                            // newnode的link設為 NULL
        insert(&head, newnode);                          //用 &head, newnode呼叫insert()
        printlist(head);                                 //呼叫printlist()輸出目前排序串列
        printf("\n");
    }
    system("pause");
}