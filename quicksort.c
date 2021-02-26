#include<stdio.h>
int a[5]={200,150,100,80,70};
void quicksort(int low ,int up)
{    while(low<up)
  {
     int j;
     j=partition(low,up);
     quicksort(low,j-1);
     quicksort(j+1,up);
}


}
int partition(int start,int end)
{
    int i,j;
    i=start;
    j=end;
    int k=a[i];
    int temp;
    
    while(i<j)
    {
        while(a[i]=<k)
        {
            i++;
        }
        while(a[j]>k)
        {                            //swap with adreeses in case of quick and heap sort
            j--;
        }
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;

    }
    a[start]=a[j];
    a[j]=k;
    return j;

}
void main()
{
     int i;
     quicksort(0,5);
     for(i=0;i<5;i++)
     {
         printf("%d\n",a[i]);
     }
}
