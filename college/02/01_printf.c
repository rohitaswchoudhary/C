// 2021-06-04 14:44:36

// use of printf function.

#include <stdio.h>

int main(){

    int a, b, sum;

    printf("enter first number:");
    scanf("%d", &a);
    printf("\n\nenter second number:");
    scanf("%d", &b);

    sum = a + b;

    printf("\n\nsum of two numbers %d and %d is: %d \n", a,b,sum);

    return 0;
}