// Create a program to calculate the area of a triangle. (Area of triangle = 1/2*B*H)

#include<stdio.h>
int main()
{
    float Base,Height,Area;
    printf("Please enter the Area of Base -> ");
    scanf("%f",&Base);

    printf("Pleae enter the Area of Height -> ");
    scanf("%f",&Height);

    Area = 0.5*(Base*Height);
    printf("The Area of Triangle is %.2f",Area);
    return 0;
}