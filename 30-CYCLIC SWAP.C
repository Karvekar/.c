#include<stdio.h>
int swap(int*,int*,int*);
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("origional numbers are %d %d %d \n",a,b,c);
    swap(&a,&b,&c);
    printf("swapped numbers are %d %d %d \n",a,b,c);
}
int swap(int* a,int* b,int* c)
{
    int temp=*a;
    *a=*c;
    *c=*b;
    *b=temp;
}
