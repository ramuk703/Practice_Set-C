// Create a program to swap two numbers.

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter the Number of A is :");
    scanf("%d",&a);

    printf("Please enter the Number of B is :");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("The Swap of Number A is %d\n",a);
    printf("The Swap of Number B is %d",b);
    return 0;

}