#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
    }node;
struct node * create()
{

    struct node *p;
    int x;
    printf("\nenter the data ,enter -1 for no data:");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    printf("\nenter the left child of %d",x);
    p->left=create();
    printf("\nenter the right child of %d ",x);
    p->right=create();
    return p;

}
struct node* insert(struct node *root,int key)
{
    struct node *temp;
    struct node *parent;
    temp=root;
    struct node *new;
    while(temp!=NULL)
    {
        if(temp->data>key)
    {
        parent=temp;
        temp=temp->left;
    }
    else if(temp->data<key)
    {
        parent =temp;
        temp=temp->right;
    }
    else{
        printf("\ncannot insert!");
        break;
    }
    }
    new=(struct node*)malloc(sizeof(struct node));
    new->left=new->right=NULL;
    if(parent->data>key)
    {
        parent->left=new;
    }
    else
    {
        parent->right=new;

    }
    return root;


}
void preorder(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    else
        return ;
}
void main()
{
    struct node *root;
    root=create();
    root=insert(root,22);
    preorder(root);

}

