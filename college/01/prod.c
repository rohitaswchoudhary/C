#include<stdio.h>

int main()
{
    int num1, num2, prod;

    printf("\nEnter the numbers you want to get multiplied: \n\n");

    printf("enter the first number: \n");
    scanf("%d",&num1);
    printf("enter the second number: \n");
    scanf("%d",&num2);

    prod = num1*num2;

    printf("\nproduct of two numbers %d and %d is: %d\n", num1, num2, prod);

    return 0;


}