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
    if (!root) //���j�𪬤G���j�M�k
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
    while (root) // �j��𪬤G���j�M�k
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
        *root = node;                        //    �N *root �]�� node
    else if (node->data > (*root)->data)     // else if  node �� data �j�� *root �� data
        insertBStree(&(*root)->right, node); //              �A�ץ� *root �� right �M node �I�sinsertBStree(),
    else                                     //      else
        insertBStree(&(*root)->left, node);  //              �A�ץ� *root �� left �M node �I�sinsertBStree(),
}

int main()
{
    TreePointer A, B, C, D, E;
    A = (TreePointer)malloc(sizeof(*A)); // �t�m�@��node�Ŷ����� A ���V��node �Ŷ����_�l��}
    A->data = 35;                        // �N A �� data �]�� 35, left �M right �]�� NULL
    A->right = NULL;
    A->left = NULL;
    B = (TreePointer)malloc(sizeof(*B)); // �t�m�@��node�Ŷ����� B ���V��node �Ŷ����_�l��}
    B->data = 46;                        // �N B �� data �]�� 46, left �M right �]�� NULL
    B->right = NULL;
    B->left = NULL;
    C = (TreePointer)malloc(sizeof(*C)); // �t�m�@��node�Ŷ����� C ���V��node �Ŷ����_�l��}
    C->data = 20;                        // �N C �� data �]�� 20, left �M right �]�� NULL
    C->right = NULL;
    C->left = NULL;
    D = (TreePointer)malloc(sizeof(*D)); // �t�m�@��node�Ŷ����� D ���V��node �Ŷ����_�l��}
    D->data = 27;                        // �N D �� data �]�� 27, left �M right �]�� NULL
    D->right = NULL;
    D->left = NULL;
    E = (TreePointer)malloc(sizeof(*E)); //�t�m�@��node�Ŷ����� E ���V��node �Ŷ����_�l��}
    E->data = 38;                        // �N E �� data �]�� 38, left �M right �]�� NULL
    E->right = NULL;
    E->left = NULL;

    // �إߤG���j�M��
    TreePointer btree = NULL; // �ŧi�@�� TreePointer btree, �ó]�� NULL
    insertBStree(&btree, E);  // �I�s insertBStree(), �N E ��J �G���j�M��btree
    insertBStree(&btree, D);  // �I�s insertBStree(), �N D ��J �G���j�M�� btree
    insertBStree(&btree, C);  // �I�s insertBStree(), �N C ��J �G���j�M�� btree
    insertBStree(&btree, A);  // �I�s insertBStree(), �N A ��J �G���j�M�� btree
    insertBStree(&btree, B);  // �I�s insertBStree(), �N B ��J �G���j�M�� btree
    inorder(btree);           // �I�s inorder(), �N btree���Ҧ��`�I���@�M
    system("pause");          // system("pause");
    // �G���j�M��
    int *p = search(btree, 27); // �I�s search() �j�M tree�̭����L 27 , printf �^�ǫ��� p �H��*p
    printf("{%p, %d}\n", p, *p);
    p = iterSearch(btree, 38); // �I�s  iterSearch() �j�M tree�̭����L 38, printf �^�ǫ��� p �H��*p
    printf("{%p, %d}\n", p, *p);
    // �I�s iterSearch() �j�M tree�̭����L 100, printf �^�ǫ��� p �H��*p
    system("pause"); // system("pause");
}
