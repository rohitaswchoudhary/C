// a example of conditional if else statements.

// write a program in C to check whether the number is positive or not.

#include <stdio.h>

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("This is a positive number. ");
    }
    else
    {
        printf("This is a not a positive number. ");
    }
}