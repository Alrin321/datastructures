#include<stdio.h>
int a[]={0};
void mergesort(int low,int high);
void merge(int low,int high,int mid);
void main()
{
    int i,n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter element %d:",i);
        scanf("%d",&a[i]);
    }
    mergesort(0,n-1);
    for(i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }

}
void mergesort(int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(low,mid);
        mergesort(mid+1,high);
        merge(low,high,mid);
    }
}
void merge(int low,int high,int mid)
{
    int i=low;
    int j=mid+1;
    int k=low;
    int temp[20]={0};
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        if(a[i]>a[j])
        {
            temp[k++]=a[j++];

        }
    }
    while(i<=mid)
    {
        temp[k++] =a[i++];
    }

        while(j<=high)
    {
        temp[k++]=a[j++];
    }


    for(i=low;i<=high;i++)
    {
        a[i]=temp[i];
    }


}
