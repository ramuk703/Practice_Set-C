// Create a program to calculate product of two floating point numbers.

#include<stdio.h>
int main()
{
    float num1,num2, sum;
    printf("Please enter the First Number -> ");
    scanf("%f",&num1);

    printf("Please enter the Second Number -> ");
    scanf("%f",&num2);

    sum = num1+num2;
    printf("The sum of two number is %.2f",sum);
    return 0;
}