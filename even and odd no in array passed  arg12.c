#include<stdio.h>
void Even(int n[],int x) 
{
     int j;
     for(j=0;j<x;j++)
     {
          if(n[j]%2==0)
               printf("  %d is Even\n",n[j]);
          else
               printf("  %d is Odd\n",n[j]);
     }
}
int main()
{
     int num[20],i,z;
     printf("\n\nEnter Limit: ");
     scanf("%d",&z);
     printf("\n  Enter %d Numbers",z);
     printf("\n\n ");
     
     for(i=0;i<z;i++)
     {
          scanf("%d",&num[i]);
     }
     printf("\n");
     Even(num,z); 
     return 0;
}

