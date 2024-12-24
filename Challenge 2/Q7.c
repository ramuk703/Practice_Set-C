// Create a pragorm to calculate Compound intrest. (Compound interest = p(1+R/100)t)

#include<stdio.h>
int main()
{
    float Principle,Rate,Time,Amount,Compound_Interest;
    printf("Please enter the Principle Amount -> ");
    scanf("%f",&Principle);

    printf("Please enter the Time of Period -> ");
    scanf("%f",&Time);

    printf("Please enter the Rate -> ");
    scanf("%f",&Rate);

    Amount = Principle*(1+Rate/100)*Time;
    // Compound_Interest = Amount-Principle;
    printf("Your Compund Interst is = %.2f",Amount);
    return 0;
}