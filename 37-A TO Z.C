#include<stdio.h>
void display();
int main()
{
    display();
}
void display()
{
    char c;
    for(c='A';c<='Z';c++)
    {
        printf("\n%c",c);
    }
}

