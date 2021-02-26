#include<stdio.h>
int a[20];
void heapify(int i,int n);
void heapsort(int n);
void swap(int *a,int *b);
void main()
{
    int n;
    printf("\nenter the number of elements:");
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nenter element %d:",i);
        scanf("%d",&a[i]);

    }
    heapsort(n);
    for(i=0;i<n;i++)
    {
        printf("%3d",a[i]);
    }
}
void heapify(int i,int n)
{
    int lc=(2*i)+1;
    int rc=(2*i)+2;
    int large=i;
    int temp;
    if(lc<n && a[lc]>a[large])
    {
        large=lc;
    }
    if(rc<n && a[rc]>a[large])
    {
        large=rc;
    }
    if(i!=large)
    {
        swap(&a[large],&a[i]);
        heapify(large,n);
    }
}
void heapsort(int n)
{
    int start=(n/2)-1;
    printf("heapsort");
    int i;
    int temp;
    for(i=start;i>=0;i--)
    {
        heapify(i,n);
    }
    for(i=n-1;i>0;i--)
    {
        swap(&a[0],&a[i]);
        heapify(0,i);
    }
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


