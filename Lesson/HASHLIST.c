#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 11
#define NUM 30
#define YES 1
#define NO 0

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;

void insert(NODE **, NODE *);
void showhash(NODE **);
void printlist(NODE *);
int search(NODE *, int);

int main()
{
    int i = 0, key;
    NODE *hash[M] = {
        NULL,
    };
    NODE *newnode;

    //  clrscr();
    srand(time(NULL)); //srand(time(NULL));

    i = 0;
    while (i < NUM)                                //   while(i<NUM)
    {                                              //   {
        newnode = (NODE *)malloc(sizeof(NODE));    //     newnode = ; //配置節點
        newnode->data = (rand() % 100) + 1;        //     newnode->data = ; // 產生一個1~100的亂數
        newnode->next = NULL;                      //     newnode->next = NULL;
        insert(&hash[newnode->data % M], newnode); //     insert(); // 將newnode 插入到hashtable 的 newnode->data % M的串列裡
        i++;                                       //     i++;
    }                                              //   }

    showhash(hash);

    printf("Please enter a number\n");
    scanf("%d", &key);

    if (search(hash[key % M], key) == YES)
        printf("FOUND\n");
    else
        printf("NOT FOUND\n");
}

void insert(NODE **head, NODE *newnode)
{

    if (*head == NULL)                     // if *head 是NULL
        *head = newnode;                   //    *head 設為 newnode
    else                                   // else
        insert(&((*head)->next), newnode); //    用(*head)->next的位址呼叫insert()
}

void showhash(NODE **hash)
{
    int i;

    for (i = 0; i < M; i++)
        printlist(hash[i]);
}

void printlist(NODE *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data); // print head的data
        head = head->next;          // head 移動下個節點位址
    }
    printf("NULL\n");
}

int search(NODE *head, int key)
{
    if (head == NULL)                   //if head 是 NULL
        return NO;                      //   return NO;
    else if (head->data == key)         //else if head的data 等於 key
        return YES;                     //       return YES;
    else                                //     else
        return search(head->next, key); //          return 用 head->next and key 再次呼叫search()的回傳值;
}
