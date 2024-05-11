#include<stdio.h>
int main()
{
    char str[100],ch;
    int count=0,i;
    printf("enter the string \n");
    gets(str);
    printf("enter the character to find its frequency\n");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        { 
            count++;
        }
    }
    printf("frequency of character %c =%d",ch,count);
}

