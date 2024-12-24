// Given an integer value, convert it to a floating-point value and print both.

#include<stdio.h>
int main()
{
    int Number;
    printf("Please enter the Integer Value ->: ");
    scanf("%d",&Number);

    printf("The Integer Value is :- %d\n",Number);
    printf("The Intger value is converted into FLoating Point Number : %.2f",(float)Number);
    return 0;
}