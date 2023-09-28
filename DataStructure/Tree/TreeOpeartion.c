#include <stdio.h>
#include <stdlib.h>
// Binary Search Tree Implementaion

struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};

typedef struct tree Tree;
// Node *root=NULL;

void *insert(Tree *ptr, int data)
{
    if (ptr == NULL)
    {
        ptr = (Tree *)malloc(sizeof(Tree));
        ptr->data = data;
        ptr->left = NULL;
        ptr->right = NULL;
    }
    else if (data < ptr->data)
    {
        ptr->left = insert(ptr->left, data);
    }
    else
    {
        ptr->right = insert(ptr->right, data);
    }

    return ptr;
}

void display(Tree *ptr, int level)
{
    int i;
    if (ptr == NULL)
        return;
    else
    {
        display(ptr->right, level - 1);
        for (i = 0; i < level; i++)
        {
            printf(" ");
        }
        printf("%d\n", ptr->data); 
    }
}

void inorder(Tree *ptr)
{
    if (ptr != NULL)
    {
        inorder(ptr->left);
        printf("%d ", ptr->data);
        inorder(ptr->right);
    }
}
void preorder(Tree *ptr)
{
    if (ptr != NULL)
    {
        printf("%d ", ptr->data);
        inorder(ptr->left);
        inorder(ptr->right);
    }
}
void postorder(Tree *ptr)
{
    if (ptr != NULL)
    {
        inorder(ptr->left);
        inorder(ptr->right);
        printf("%d ", ptr->data);
    }
}
void treeTraversal(Tree *ptr)
{
    int order;
    printf("In which order you want to traverse ?\n1. Inorder\n2. PreOrder\n3. PostOrder    \n");
    scanf("%d", &order);
    switch (order)
    {
    case 1:
        inorder(ptr);
        break;
    case 2:
        preorder(ptr);
        break;
    case 3:
        postorder(ptr);
        break;
    default:
        printf("Invalid Input");
        break;
    }
}
int main()
{
    Tree *root = NULL;
    int i, data, n;
    printf("\nHow many nodes you want to create ? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter data : ");
        scanf("%d", &data);
        root = insert(root, data);
    }
    treeTraversal(root);
    return 1;
}
