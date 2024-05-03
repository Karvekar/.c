#include<stdio.h>
int main() 
{
    int num1, num2;
    printf("Enter first number\n");
    scanf("%d", &num1);

    printf("Enter second number\n");
    scanf("%d", &num2);

    while (num1 != num2) 
	{
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }
    printf("GCD is %d\n", num1);

    return 0;
}

