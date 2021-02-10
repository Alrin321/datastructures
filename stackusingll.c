#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *p;
};
struct node *top=NULL,*new;
void push(int info)
{
    new=(struct node *)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("\ninvalid");
    }
    else if(top==NULL)
    {
        top=new;
        top->data=info;
        new->p=NULL;

    }
    else
    {
        new->p=top;
        top=new;
        top->data=info;
    }
}
int pop()
{    int info;
    if(top==NULL)
    {
        printf("\nunderflow");
    }
    else
    {  info=top->data;
       top=top->p;


    }
    return(info);

}
void display()
{
   struct node*tmp;
   tmp=top;
   printf("\nthe elements are:");
   while(tmp->p!=NULL)
   {
       printf(" %d",tmp->data);
       tmp=tmp->p;
   }
   printf(" %d",tmp->data);
}
void main()
{
    struct node *new;
    int option=0,info;
    while(option!=4)
    {
     printf("\nEnter 1 for push , 2 for pop,3 for display,4 for exit:");
     scanf("%d",&option);

        switch(option)
    {
        case 1:
           printf("\nEnter data");
           scanf("%d",&info);
           push(info);
           break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;

        default:
            printf("\nInvalid option");
            break;
    }


    }




}

