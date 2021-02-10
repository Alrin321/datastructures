#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node*link;
 };
 struct node *front=NULL;
 struct node *rear=NULL;
 void enqueue(int x)
 {
     struct node*newnode;
     newnode=(struct node*)malloc(sizeof(struct node));

     if(front==NULL)
     {
         front=rear=newnode;
         newnode->link=NULL;
         newnode->data=x;
     }
     else
     {
         rear->link=newnode;
         rear=newnode;
         newnode->data=x;
         newnode->link=NULL;
     }
 }
 struct node*dequeue()
 {
     struct node *p;
     if(front==NULL)
     {
         printf("\ncannot delete");
     }
     else
     {
        p=front;
        front=front->link;
        free(p);
     }
     return p;
 };
 void display()
 {
     struct node* front1=front;
     if(front1==NULL)
     {
         printf("\nempty!");
     }
     else
     {
         printf("\nthe elements are:");
         while(front1!=NULL)
         {
             printf(" %d",front1->data);
             front1=front1->link;
         }

     }
 }
 void main()
 {
     int n=0;
     int x;
     while(n!=-1)
     {     printf("\nenter 1 for enqueue , 2 for dequeue and -1 for exit:");
           scanf("%d",&n);
           switch(n){
       case 1:
              printf("\nenter the element to insert:");
              scanf("%d",&x);
              enqueue(x);
              display();
              break;
       case 2:
              dequeue();
              display();
              break;

       default:
              printf("invalid operation!");

           }

              }
     }


