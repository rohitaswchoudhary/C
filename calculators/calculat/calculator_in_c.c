#include <stdio.h>

int main()
{
    char Operator;
    int again;
    float num1[100], num2;
    float result = 0.0;
do{
    printf("Enter '+' to perform addition\nEnter '-' to perform substraction.\nEnter '/' for Division.\nEnter '*' for Multiplication\n");
    printf("\nEnter your choice: ");
    scanf("%c", &Operator);

    printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
    printf("\nValue for first number : ");
    scanf("%s", &num1);
    printf("Value for second number : ");
    scanf("%s", &num2);

    if (Operator == '+')
    {
        for (i = 1; i <= n; i++)
    {
        int test;
        printf("\nEnter Marks in subject %d. %s : ", i, sub[i-1]);
        scanf("%d", &test);
        if (test < 0)
        {
            printf("Invalid!!, Please provide the valid marks in range 0-100\n");
            return main();
        }
        else if (test >100)
        {
            printf("Invalid Input!!, Please provide the valid marks in range 0-100\n");
            return main();
        }

        a[i] = test;
    }

    // calculating and displaying sum of elements in array.

    for (i = 1; i <= n; i++)
    {
        sum += a[i];
    }

    printf("\nAggregate marks in all subjects : %f\n\n", sum);

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
    printf("\npress any key to continue and press 1 to exit");
    scanf("%d",&again);

} while(again!=1);

    getchar();
    return 0;
    
}