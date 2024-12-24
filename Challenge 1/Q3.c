// Create a program that declares one variable of each of the fundamental data types (int, flaot, double, char) and prints their size using sizeof() operator.

#include<stdio.h>
int main()
{
    int myInt;
    float myFloat;
    char myChar;
    double myDouble;
    printf("The size of INT is %zu\n",sizeof(myInt));
    printf("The size of FlOAT is %zu\n",sizeof(myFloat));
    printf("The size of Char is %zu\n",sizeof(myChar));
    printf("The size of DOUBLE is %zu",sizeof(myDouble));
    return 0;
}