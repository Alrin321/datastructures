#include<stdio.h>
void tuple(int a1[][20],int n1,int m1,int x);

void main()
{
    int i,j,n1=0,n2,m1=0,m2,a[20][20],b[20][20],x=0,y=0;
    printf("enter the number of rows of first sparse matrix:");
    scanf("%d",&n1);
    printf("\nenter the number of columns of first sparse  matrix:");
    scanf("%d",&m1);
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            printf("\nenter the element [%d][%d] of matrix 1:",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                x++;
            }
        }
    }

    tuple(a,n1,m1,x);
    printf("enter the number of rows of second sparse matrix:");
    scanf("%d",&n2);
    printf("\nenter the number of columns of second sparse matrix:");
    scanf("%d",&m2);
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            printf("\nenter the [%d][%d] element of matrix 2:",i,j);
            scanf("%d",&b[i][j]);
            if(b[i][j]!=0)
            {
                y++;
            }
        }
    }
    tuple(b,n2,m2,y);
}

void tuple(int a1[][20],int n1,int m1,int x)
{
    int i,j,m=0,c[20][3]={0},d[20][3];


    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
            if(a1[i][j]!=0)
            {
               c[m][0]=i;
               c[m][1]=j;
               c[m][2]=a1[i][j];
               m++;
            }
        }
    }

        printf("\n------tuple form-----");
        printf("\n");
        for(i=0;i<x;i++)
        {
            for(j=0;j<3;j++)
            {

                printf("\t%d",c[i][j]);
            }
            printf("\n");
        }

        for(i=0;i<x;i++)
        {
            for(j=0;j<3;j++)
            {
                d[j][i]=c[i][j];
            }

        }
        printf("---\ntranspose----");

        printf("\n");
         for(i=0;i<3;i++)
        {
            for(j=0;j<x;j++)
            {
                printf("\t%d",d[i][j]);
            }
            printf("\n");

        }

    }


