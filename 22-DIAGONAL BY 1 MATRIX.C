#include<stdio.h>
int main()
{
    int a[3][4];
    int i,j;
    printf("enter the elements of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is:\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++)
    {
        printf("\t%d",a[i][j]);
    }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==j||i+j==5)
            a[i][j]=1;
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}
