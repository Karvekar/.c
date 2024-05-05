#include<stdio.h>
#include<math.h>
float hypo(int a,int b);
int main()
{
    float a,b;
    printf("enter the sides of tringle\n");
    scanf("%f%f",&a,&b);
    hypo(a,b);
    printf("hypoteneous of the triangle is %f",hypo(a,b));
}
float hypo(int a,int b)
{
    return sqrt(a*a+b*b);
}
