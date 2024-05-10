#include<stdio.h>
int main()
{
    int n,m;
    printf("enter the no of row and column\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    int i,j;
    int sum=0;
    printf("enter the elements of matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<i;j++)
        {
            a[i][j]=0;
        }
    }
    printf("matrix with lower elements zero\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nsum of diagonal elements=%d",sum);
}
