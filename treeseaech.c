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
struct node * search(struct node *p,int key)
{
    if(p->data!=key)
    {
        if(p->left!=NULL)
        {
            search(p->left,key);   //searching the left subtree
        }
        else
        {
            return 0;      //to end searching the left subtree
        }
        if(p->right!=NULL)
        {
            search(p->right,key);
        }
        else
        {
            return 0;
        }

    }
    else
        return p;
};
void main(){
  struct node *root;
  struct node *ptr;
  int x;
  root=create();
  printf("\nenter the data to be searched:");
  scanf("%d",&x);
  ptr=search(root,x);
  if(ptr==NULL)
  {
      printf("\nsearch unsuccessfull");
  }
  else
    printf("\nelement found");

  }
