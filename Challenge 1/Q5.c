// Create a program to print the area of a square by inputing its side length

#include<stdio.h>
int main()
{
    float side_length;
    float area;
    printf("Please enter the side Length :");
    scanf("%f",&side_length);
    area=side_length*side_length;
    printf("The area of a squre is %.2f of %.2f",area,side_length);
    return 0;

}