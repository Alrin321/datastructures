#include<stdio.h>
void binarysearch(int a[],int n,int x)
{
    int low=0;
    int high=n-1;
    int mid;
    int flag=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==x)
        {
            flag=1;
            break;
        }
        else if(a[mid]<x)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }

    }
    if(flag==1)
    {
        printf("\nelement found !");
    }
    else
    {
        printf("\nelement not found!");
    }
}
void main()
{

     int a[20];
     int n,x;
     printf("enter the size of the array:");
     scanf("%d",&n);
     int i;
     printf("enter elements in sorted form!");
     for(i=0;i<n;i++)
     {

         printf("\nenter element%d:",i);
         scanf("%d",&a[i]);
     }
     printf("enter the element to search:");
     scanf("%d",&x);
     binarysearch(a,n,x);

}
