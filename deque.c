#include<stdio.h>
#define SIZE 5
int a[SIZE];
int front=-1;
int rear=-1;
void  enqueue_at_rear(int x)
{
    if(front==(rear+1)%SIZE)
    {
        printf("full ,cannot be inserted");
    }
    else if(front==-1)
    {
        front++;
        rear++;

    }
   else if(rear==SIZE-1)
   {
      rear=0;

   }
   else
   {
       rear++;
   }
     a[rear]=x;
}

void enqueue_at_front(int x)
{
    if((front==0 && rear==SIZE-1)||(front=rear+1))
    {
        printf("full ,cannot be inserted");
    }
    else if(rear==-1)
    {
        front++;
        rear++;

    }
   else if(front==0)
   {
      front=SIZE-1;

   }
   else
   {
       front--;
   }
     a[front]=x;
}

int dequeue_at_front()
{
    int item;
    if(front==-1)
    {
        printf("\nempty,cannot delete an element");
    }
    item=a[front];
    return(item);
     if(front==rear)
    {
        front=rear=-1;
    }
    else if(front==SIZE-1)
    {
        front=0;
    }
    else
    {
        front++;
    }



}
int dequeue_at_rear()
{
      int item;
      item = a[rear];
      return (item);
     if(front==-1)
    {
        printf("\nempty,cannot delete an element");
    }
    if(front==rear)
    {
        front=rear=-1;
    }
    else if(rear==0)
    {
        rear=SIZE-1;
    }
    else
    {
        rear--;
    }


}
void display()
{
    int i =front;
    if(front==-1)
    {
        printf("empty");
    }


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
    printf("Enter 1 for insertion at rear ,2 for insertion at front,3 for deletion at front ,4 for deletion at rear,and -1 for exit");
    while(n!=-1)
    {
        printf("\nenter the key value to perform the operation");
        scanf("%d",&n);
        switch(n)
        {
         case 1:
             printf("\nEnter the element to be inserted");
             scanf("%d",&x);
             enqueue_at_rear(x);
             printf("\nThe elements in  queue are:");
             display();
             break;
         case 2:
              printf("\nEnter the element to be inserted");
              scanf("%d",&x);
              enqueue_at_front(x);
              printf("\nThe queue is:");
              display();
              break;
         case 3:
             dequeue_at_front();
             display();
             break;
         case 4:
            dequeue_at_rear();
            display();
            break;
         default:
            printf("\nno operation can be performed");
            break;

        }
    }
}
