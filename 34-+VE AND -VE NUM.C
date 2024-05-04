#include<stdio.h>
int check(int num);
int main()
{
    int num;
    printf("enter the number \n");
    scanf("%d",&num);
    check(num);
    if(check(num)==1)
        printf("positive");
    else if(check(num)==-1)
        printf("negative");
    else 
        printf("number is zero");
}
int check(int num)
{
    if(num>0)
    return 1;
    if(num<0)
    return -1;
}
