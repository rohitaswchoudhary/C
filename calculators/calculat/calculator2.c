#include <stdio.h>

int main()
{
    char Operator, again;
    float num1, num2;
    float result = 0.0;

    printf("Enter '+' to perform addition\nEnter '-' to perform substraction.\nEnter '/' for Division.\nEnter '*' for Multiplication\n");
    printf("\nEnter your choice: ");
    scanf("%c", &Operator);

    printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
    printf("\nValue for first number : ");
    scanf("%f", &num1);
    printf("Value for second number : ");
    scanf("%f", &num2);

    if (Operator == '+')
    {
        printf("\n The result of %.2f + %.2f  = %.2f", num1, num2, num1 + num2);
    }
    else if (Operator == '-')
    {
        printf("\n The result of %.2f - %.2f  = %.2f", num1, num2, num1 - num2);
    }
    else if (Operator == '*')
    {
        printf("\n The result of %.2f * %.2f  = %.2f", num1, num2, num1 * num2);
    }
    else if (Operator == '/')
    {
        printf("\n The result of %.2f / %.2f  = %.2f", num1, num2, num1 / num2);
    }
    else
    {
        printf("\n You have enetered an Invalid Operator ");
    }
    getchar();
    return 0;
    
}