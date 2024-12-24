// Create a program to input name of the person and respond with "Welcome NAME to Modern Computer Point"

#include<stdio.h>
int main()
{
    char name[100];
    printf("Please enter the String Name : ");
    scanf("%s",&name);
    printf("Welcome %s to Modern Computer Point",name);
    return 0;
}