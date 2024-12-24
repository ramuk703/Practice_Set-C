// Create a progra to print the area of a circle by inputting its radius.

#include<stdio.h>
int main()
{
    const float pi=3.14159;
    float area_of_circle;
    float radius;
    printf("Please enter the area of circle : ");
    scanf("%f",&radius);

    area_of_circle=pi*radius*radius;
    printf("The ara of circle is %f",area_of_circle);
    return 0;
}