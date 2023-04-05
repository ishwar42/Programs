#include <stdio.h>
#include <stdlib.h>
struct node
{
    int key;
    struct node *l,*r;
};
struct node *newNode(int item)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->key=item;
    temp->l=temp->r=NULL;
    return temp;
}
void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->key);
        preorder(root->l);
        preorder(root->r);
    }
}
void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->l);
        printf("%d ",root->key);
        inorder(root->r);
    }
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->l);
        postorder(root->r);
        printf("%d ",root->key);
    }
}
struct node *insert(struct node *node,int key)
{
    if(node==NULL)
    return newNode(key);
    if(key<node->key)
        node->l=insert(node->l,key);
    else
        node->r=insert(node->r,key);
    return node;
}
struct node *minValueNode(struct node *node)
{
    struct node *c=node;
    while(c->l!=NULL)
        c=c->l;
    return c;
}
struct node *deleteNode(struct node *root,int key)
{
    if(root==NULL)
        return root;
    if(key < root->key)
        root->l=deleteNode(root->l,key);
    else if(key>root->key)
        root->r=deleteNode(root->r,key);
    else
    {
        if(root->l==NULL)
        {
            struct node *temp=root->r;
            free(root);
            return temp;
        }  
        else if(root->r==NULL)
        {
            struct node *temp=root->l;
            free(root);
            return temp;
        }
        struct node *temp=minValueNode(root->r);
        root->key=temp->key;
        root->r=deleteNode(root->r,temp->key);
    }
    return root;
}
int main()
{
    struct node *root=NULL;
    root=insert(root,8);
    root=insert(root,3);
    root=insert(root,1);
    root=insert(root,6);
    root=insert(root,7);
    root=insert(root,10);
    root=insert(root,14);
    root=insert(root,4);
    printf("Preorder traversal:\n");
    preorder(root);
    printf("\nInorder traversal:\n");
    inorder(root);
    printf("\nPostorder traversal:\n");
    postorder(root);
    printf("\n\n");
    root=deleteNode(root,10);
    printf("\nPreorder traversal after deletion:\n");
    preorder(root);
    printf("\nInorder traversal after deletion:\n");
    inorder(root);
    printf("\nPostorder traversal after deletion:\n");
    postorder(root);
}
