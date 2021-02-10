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

void preorder(struct node *t){

   if(t!=NULL)
    {
        printf("\n%d",t->data);
        preorder(t->left);
        preorder(t->right);
    }
    else
        return;
   }

   void postorder(struct node *t){

   if(t!=NULL)
    {

        postorder(t->left);
        postorder(t->right);
        printf("\n%d",t->data);

    }
    else
        return;
   }
   void inorder(struct node *t){

   if(t!=NULL)
    {

        preorder(t->left);
        printf("\n%d",t->data);
        preorder(t->right);
    }
    else
        return;
   }




void main()
{

    struct node *root =create();
    printf("\n---------Pre order traversal------");
    preorder(root);
    printf("\n---------Postorder traversal------");
    postorder(root);
    printf("\n---------in order traversal------");
    inorder(root);

}
