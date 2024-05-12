#include<stdio.h>
int check(char c);
int main()
{
    char c;
    printf("enter the character\n");
    scanf("%c",&c);
    check(c);
    if(check(c)==1)
        printf("%c is alphabet",c);
    else
        printf("%c is not alphabet",c);
}
int check(char c)
{
    if(c>='a'&&c<='z'||c>='A'&&c<='Z') 
        return 1;
    else
        return 0;
}
