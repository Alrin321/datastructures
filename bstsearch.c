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
void search(struct node *p,int key)
{
    if(key<(p->data))
    {
        search(p->left,key);
    }
    else if(key>(p->data))
    {
        search(p->right,key);
    }
    else if(key==p->data)
    {
        printf("successful");
    }
    else
    {
        printf("unsuccessful");
    }

}
void main()
{
    struct node *p;
    p=create();
    int key;
    printf("enter the element to be searched:");
    scanf("%d",&key);
    search(p,key);

}
