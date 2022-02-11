#include <stdio.h>
#include <stdlib.h>

typedef struct node *TreePointer;
struct node
{
    int data;
    TreePointer left, right;
};

void inorder(TreePointer ptr)
{
    if (ptr)
    {
        inorder(ptr->left);
        printf("%d\t", ptr->data);
        inorder(ptr->right);
    }
}

int *search(TreePointer root, int key)
{
    if (!root) //遞迴樹狀二分搜尋法
        return NULL;
    if (key == root->data)
        return &(root->data);
    else if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int *iterSearch(TreePointer root, int k)
{
    while (root) // 迴圈樹狀二分搜尋法
    {
        if (k == root->data)
            return &(root->data);
        else if (k < root->data)
            root = root->left;
        else
            root = root->right;
    }
}

void insertBStree(TreePointer *root, TreePointer node)
{
    if (*root == NULL)                       // if *root == NULL
        *root = node;                        //    將 *root 設為 node
    else if (node->data > (*root)->data)     // else if  node 的 data 大於 *root 的 data
        insertBStree(&(*root)->right, node); //              再度用 *root 的 right 和 node 呼叫insertBStree(),
    else                                     //      else
        insertBStree(&(*root)->left, node);  //              再度用 *root 的 left 和 node 呼叫insertBStree(),
}

int main()
{
    TreePointer A, B, C, D, E;
    A = (TreePointer)malloc(sizeof(*A)); // 配置一個node空間並讓 A 指向此node 空間的起始位址
    A->data = 35;                        // 將 A 的 data 設成 35, left 和 right 設成 NULL
    A->right = NULL;
    A->left = NULL;
    B = (TreePointer)malloc(sizeof(*B)); // 配置一個node空間並讓 B 指向此node 空間的起始位址
    B->data = 46;                        // 將 B 的 data 設成 46, left 和 right 設成 NULL
    B->right = NULL;
    B->left = NULL;
    C = (TreePointer)malloc(sizeof(*C)); // 配置一個node空間並讓 C 指向此node 空間的起始位址
    C->data = 20;                        // 將 C 的 data 設成 20, left 和 right 設成 NULL
    C->right = NULL;
    C->left = NULL;
    D = (TreePointer)malloc(sizeof(*D)); // 配置一個node空間並讓 D 指向此node 空間的起始位址
    D->data = 27;                        // 將 D 的 data 設成 27, left 和 right 設成 NULL
    D->right = NULL;
    D->left = NULL;
    E = (TreePointer)malloc(sizeof(*E)); //配置一個node空間並讓 E 指向此node 空間的起始位址
    E->data = 38;                        // 將 E 的 data 設成 38, left 和 right 設成 NULL
    E->right = NULL;
    E->left = NULL;

    // 建立二分搜尋樹
    TreePointer btree = NULL; // 宣告一個 TreePointer btree, 並設為 NULL
    insertBStree(&btree, E);  // 呼叫 insertBStree(), 將 E 放入 二分搜尋樹btree
    insertBStree(&btree, D);  // 呼叫 insertBStree(), 將 D 放入 二分搜尋樹 btree
    insertBStree(&btree, C);  // 呼叫 insertBStree(), 將 C 放入 二分搜尋樹 btree
    insertBStree(&btree, A);  // 呼叫 insertBStree(), 將 A 放入 二分搜尋樹 btree
    insertBStree(&btree, B);  // 呼叫 insertBStree(), 將 B 放入 二分搜尋樹 btree
    inorder(btree);           // 呼叫 inorder(), 將 btree的所有節點走一遍
    system("pause");          // system("pause");
    // 二分搜尋樹
    int *p = search(btree, 27); // 呼叫 search() 搜尋 tree裡面有無 27 , printf 回傳指標 p 以及*p
    printf("{%p, %d}\n", p, *p);
    p = iterSearch(btree, 38); // 呼叫  iterSearch() 搜尋 tree裡面有無 38, printf 回傳指標 p 以及*p
    printf("{%p, %d}\n", p, *p);
    // 呼叫 iterSearch() 搜尋 tree裡面有無 100, printf 回傳指標 p 以及*p
    system("pause"); // system("pause");
}
