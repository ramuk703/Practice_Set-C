// Create a program to calculate primeter of a rectangle. Perimeter of rectangle ABCD = A+B+C+D.

#include<stdio.h>
int main()
{
    float A,B,C,D,Perimter;
    printf("Please enter the Length of 'A' :-  ");
    scanf("%f",&A);

    printf("Please enter the Length of 'B'  :- ");
    scanf("%f",&B);

    printf("Please enter the Length of 'C' :- ");
    scanf("%f",&C);

    printf("Please enter the Length of 'D' :- ");
    scanf("%f",&D);

    Perimter = (A+B+C+D);
    printf("This is Permiter of Length %f",Perimter);
    return 0;
}