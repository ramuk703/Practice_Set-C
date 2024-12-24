// Create a program that takes two numbers and shows result of all arithmetic Operators(+,-,*,/,%).

#include<stdio.h>
int main()
{
    int Sum,Sub,Mult,Div,Modu,Num1,Num2;
    printf("Please enter the First Number -> ");
    scanf("%d",&Num1);

    printf("Now' Please enter the Second Number -> ");
    scanf("%d",&Num2);

    Sum = Num1+Num2;
    printf("The sum of Two Number is %d\n",Sum);

    Sub = Num1-Num2;
    printf("The Subtract of Two Number is %d\n",Sub);

    Mult = Num1*Num2;
    printf("The Multiplication of Two Number is %d\n",Mult);

    Div = Num1/Num2;
    printf("The Division of Number is %d\n",Div);

    Modu = Num1%Num2;
    printf("The Modulus of Two Number is %d",Modu);
    return 0;
}