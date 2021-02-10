#include<stdio.h>
void main()
{
    int a[7];
    int i=0;
    for(i=0;i<7;i++)
    {
       printf("enter element %d:\n",i);
       scanf("%d",&a[i]);
    }

    int j,min,temp;
    for(i=0;i<7;i++)
    {
        min=i;
        for(j=i+1;j<7;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }

        }
        if(i!=min)
            {
                temp=a[min];
                a[min]=a[i];
                a[i]=temp;
            }

    }
    printf("sorted array:\n");
    for(i=0;i<7;i++)
    {
        printf(" %d",a[i]);
    }
}
