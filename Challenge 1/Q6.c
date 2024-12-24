// Create a program to define a constant for the mathematical value pi(3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.

#include<stdio.h>
int main()
{
    const float pi=3.14159;
    float radius,circumference;
    printf("Please enter the Radius of Circle  :");
    scanf("%f",&radius);
    circumference=2*pi*radius;
    printf("Circumference of a circle with a radius is %.2f",circumference);
    return 0;
}