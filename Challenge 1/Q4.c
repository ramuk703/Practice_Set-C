// Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.

#include<stdio.h>
int main()
{
    char first_name[100];
    char second_name[100];
    

    printf("Please enter the First Name : ");
    scanf("%s",&first_name);

    printf("Please enter the Second Name : ");
    scanf("%s",&second_name);

    int age;
    printf("Now' Please enter Your Age : ");
    scanf("%d",&age);

    printf("\n");
    printf("-------------------------");


    printf("\n User Details\n");
    printf("---------------------\n");
    printf("First Name is %s\n",first_name);
    printf("Second Name is %s\n",second_name);
    printf("Your Age is %d",age);
    return 0;

}