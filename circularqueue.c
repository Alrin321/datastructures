#include<stdio.h>
#define SIZE 20
int a[SIZE];
int front=-1;
int rear=-1;
void  enqueue(int x)
{
    if(front==(rear+1)%SIZE)
    {
        printf("full ,cannot be inserted");
    }
    else if(front==-1)
    {
        front++;
        rear++;
        a[rear]=x;
    }
   else
   {
      rear=(rear+1)%SIZE;
      a[rear]=x;
   }
}




int dequeue()
{
    if(front==-1)
    {
        printf("\nempty,cannot delete an element");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%SIZE;
    }


}
void display()
{
    int i =front;


     while(i!=rear)
    {
        printf(" %d",a[i]);
        i=(i+1)%SIZE;
    }
    printf(" %d",a[i]);
    }

void main()
{
    int n=0,x;
    printf("Enter 1 for insertion ,2 for deletion,and -1 for exit");
    while(n!=-1)
    {
        printf("\nenter the key value to perform the operation");
        scanf("%d",&n);
        switch(n)
        {
         case 1:
             printf("\nEnter the element to be inserted");
             scanf("%d",&x);
             enqueue(x);
             printf("\nThe elements in  queue are:");
             display();
             break;
         case 2:
              dequeue();
              printf("\nThe queue is:");
              display();
              break;
         default:
             printf("\nno operation will be performed");
             break;
        }
    }
}


