#include <stdio.h>
#include <stdlib.h>

typedef struct node *TreePointer;
struct node
{
      int data;
      TreePointer left, right;
};

void preorder(TreePointer ptr)
{
      if (ptr)
      {
            printf("[%d]", ptr->data);
            preorder(ptr->left);
            preorder(ptr->right);
      }
}

void postorder(TreePointer ptr)
{
      if (ptr)
      {
            postorder(ptr->left);
            postorder(ptr->right);
            printf("[%d]", ptr->data);
      }
}

void inorder(TreePointer ptr)
{
      if (ptr)
      {
            inorder(ptr->left);
            printf("[%d]", ptr->data);
            inorder(ptr->right);
      }
}

int main()
{
      TreePointer A, B, C, D, E;
      A = (TreePointer)malloc(sizeof(*A)); // 配置一個node空間並讓 A 指向此node 空間的起始位址
      A->data = 13;
      A->left = NULL;
      A->right = NULL;                     // 將 A 的 data 設成 13, left 和 right 設成 NULL
      B = (TreePointer)malloc(sizeof(*B)); // 配置一個node空間並讓 B 指向此node 空間的起始位址
      B->data = 36;
      B->left = NULL;
      B->right = NULL;                     // 將 B 的 data 設成 36, left 和 right 設成 NULL
      C = (TreePointer)malloc(sizeof(*C)); // 配置一個node空間並讓 C 指向此node 空間的起始位址
      C->data = 43;                        // 將 C 的 data 設成 43, left 和 right 設成 NULL
      C->left = NULL;
      C->right = NULL;
      D = (TreePointer)malloc(sizeof(*D)); // 配置一個node空間並讓 D 指向此node 空間的起始位址
      D->data = 27;
      D->left = NULL;
      D->right = NULL;                     // 將 D 的 data 設成 27, left 和 right 設成 NULL
      E = (TreePointer)malloc(sizeof(*E)); //配置一個node空間並讓 E 指向此node 空間的起始位址
      E->data = 9;
      E->left = NULL;
      E->right = NULL; // 將 E 的 data 設成 9, left 和 right 設成 NULL

      A->left = C;
      A->right = B; // 將 A的 left 指向 C, right 指向 B
      C->right = D; // 將 C 的 right 指向 D
      B->left = E;  // 將 B的 left 指向 E

      TreePointer tree = A; // 宣告一個 TreePointer tree 並指向 A
      inorder(tree);
      printf("\n"); // 呼叫 inoder() 將  tree 的所有 node 照著 inorder順序走一次
      postorder(tree);
      printf("\n"); // 呼叫 postorder()  將  tree 的所有 node 照著 post order順序走一次
      preorder(tree);
      printf("\n"); // 呼叫 preorder()  將  tree 的所有 node 照著 pre order順序走一次

      system("pause"); // system("pause");
}
