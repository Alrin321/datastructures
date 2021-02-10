#include<stdio.h>
int c[20];

void readpoly(int a[],int deg)
{
    int i;
   for(i=0;i<=deg;i++)
    {
        printf("\nEnter the coefficient of x^%d",i);
        scanf("%d",&a[i]);
    }
}
void display(int a[],int deg)
{
    int i;
    for(i=0;i<=deg;i++)
    {
        if(i==0)
        {
            printf("%d",a[i]);
        }

        else
        {
            printf("+%dx^%d",a[i],i);
        }
    }
}
void addpoly(int a[],int b[],int deg,int deg1)
{
    int i;
    if(deg>deg1)
    {
        for(i=0;i<=deg1;i++)
        {
            c[i]=a[i]+b[i];
        }
        for(i=deg1+1;i<=deg;i++)
        {
            c[i]=a[i];
        }
    }
    else
    {
         for(i=0;i<=deg;i++)
        {
            c[i]=a[i]+b[i];
        }
        for(i=deg+1;i<=deg1;i++)
        {
            c[i]=b[i];
        }
    }
}

void main()
{

    int i,deg1,deg2,a[20],b[20];
    printf("Enter the degree of the first  polynomial");
    scanf("%d",&deg1);
    readpoly(a,deg1);
    printf("\nEnter the degree of the second polynomial");
    scanf("%d",&deg2);
    readpoly(b,deg2);
    addpoly(a,b,deg1,deg2);
    printf("\nThe first polynomial is:");
    display(a,deg1);
    printf("\nThe second polynomial is :");
    display(b,deg2);
    printf("\nThe resultant polynomial is:");
    if(deg1>deg2)
    {
      display(c,deg1);

    }
    else
    {
        display(c,deg2);
    }


}
