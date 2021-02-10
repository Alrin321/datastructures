#include<stdio.h>
#define SIZE 20
int a[SIZE];
int top =-1;
void  push(int x)
{
    if(top==SIZE-1)
    {
        printf("full ,cannot be pushed");
    }

   else
   {
      top++;
      a[top]=x;
   }


}

int pop()
{
    if(top==-1)
    {
        printf("\nempty,cannot pop an element");
    }
    else
    {
        int item =a[top];
        top--;
        return item;
    }


}
void display()
{
    for(int i=0;i<=top;i++)
    {
        printf(" %d",a[i]);
    }
}
void main()
{
    int n=0,x;
    printf("Enter 1 for push ,2 for pop,and -1 for exit");
    while(n!=-1)
    {
        printf("\nenter the key value to perform the operation");
        scanf("%d",&n);
        switch(n)
        {
         case 1:
             printf("\nEnter the element to be inserted");
             scanf("%d",&x);
             push(x);
             printf("\nThe elements in  stack are:");
             display();
             break;
         case 2:
              pop();
              printf("\nThe stack is:");
              display();
              break;
         default:
             printf("\nno operation will be performed");
             break;
        }
    }

}

