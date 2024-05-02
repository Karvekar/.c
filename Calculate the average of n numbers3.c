#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);

    double sum = 0;

    for (int i = 0; i < n; ++i) 
	{
        double n;
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &n);
        sum += n;
    }

    double average = sum / n;

    printf("Average of %d numbers is: %lf\n", n, average);

    return 0;
}

