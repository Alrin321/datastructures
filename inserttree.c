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
    else{

    p=(struct node*)malloc(sizeof(struct node));
    p->data=x;
    printf("\nenter the left child of %d",x);
    p->left=create();
    printf("\nenter the right child of %d ",x);
    p->right=create();
    }
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
  struct node *root,*newnode;
  struct node *ptr;
  int x,option,data;
  root=create();
  printf("\nenter the data of the parent node of node to be inserted:");
  scanf("%d",&x);
  printf("\nenter the data to be inserted:");
  scanf("%d",&data);
  ptr=search(root,x);
  printf("\n%d",*ptr);
  if(ptr==NULL)
  {
      printf("no such node in the tree:insertion not possible");

  }
  else{
    if(ptr->right!=NULL || ptr->left!=NULL)
    {
        printf("enter 1 if insertion to be done as left else enter 2: ");
        scanf("%d",&option);
        if(option==1)
        {
           if(ptr->left==NULL)
           {
               newnode=(struct node *)malloc(sizeof(struct node));
               newnode->data=data;
               newnode->right=NULL;
               newnode->left=NULL;

           }
           else{
             printf("\ninsertion not possible as left child!");
           }
        }
        else
        {
            if(ptr->right==NULL)
           {
               newnode=(struct node *)malloc(sizeof(struct node));
               newnode->data=data;
               newnode->right=NULL;
               newnode->left=NULL;

           }
           else{
             printf("\ninsertion not possible as right child!");
           }
        }

    }
    else{
        printf("insertion not possible as child of this parent node!");
    }
  }
}

