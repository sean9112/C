#include <stdio.h>
#include <stdlib.h>

typedef struct listNode *listPointer;
struct listNode
{
   int data;
   listPointer link;
};

void push(listPointer *top, listPointer node)
{
   if (*top == NULL) //if *top is null
   {
      *top = node; // 將*top 設為 node
   }
   else
   {
      node->link = *top; // node的link 指向 *top
      *top = node;       // 將*top 改為  node
   }
}

int pop(listPointer *top)
{
   int temp;
   if (*top != NULL) // if *top 不為 NULL
   {
      temp = (*top)->data; //取出 *top的data放到  temp
      *top = (*top)->link; // 將 *top 改為 *top的下一個 節點
      return temp;         // 回傳 temp
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

   printf("模擬stack\n");
   listPointer top = NULL;
   first->link = NULL;
   second->link = NULL;
   third->link = NULL;

   push(&top, first);              // push 第一個node
   printlist(top);                 // print top
   push(&top, second);             // push 第二個node
   printlist(top);                 // printf top
   push(&top, third);              // push 第三個node
   printlist(top);                 //printf top
   system("pause");                // syste("pause");
   printf("Pop(%d)\n", pop(&top)); // pop top
   printf("Pop(%d)\n", pop(&top)); // pop top
   printf("Pop(%d)\n", pop(&top)); // pop top
   system("pause");                // system("pause");
}
