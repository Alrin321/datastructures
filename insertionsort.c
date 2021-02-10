#include<stdio.h>
void main()
{
    int a[5]={100,90,80,70,60};
    int i,j,k;
    for(i=1;i<5;i++)
    {   k=a[i]; //a[i] to be inserted at the proper place
        for(j=i-1;j>=0&&k<a[j];j--)//comparison done
        {
            a[j+1]=a[j];
        }
        a[j+1]=k;
    }
    printf("sorted array:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
}
