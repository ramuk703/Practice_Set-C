// Create a program to calculate simple interest. Simple Interest = (PxTxR)/100

#include<stdio.h>
int main()
{
    float Principle,Time,Rate,Simple_Interest;
    printf("PLease enter the Principle Amount -> ");
    scanf("%f",&Principle);

    printf("Please enter the Time of Period -> ");
    scanf("%f",&Time);

    printf("Please enter the Rate -> ");
    scanf("%f",&Rate);

    Simple_Interest = (Principle*Time*Rate)/100;
    printf("Your simple interest is %.2f",Simple_Interest);
    return 0;
}