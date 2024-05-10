#include<stdio.h>
int main()
{
    int a[100],n,i,j,count=0;
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
    {
        scanf("\t%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("no of duplicates=%d",count);
}

