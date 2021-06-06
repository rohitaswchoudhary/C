// program to swap two variable without using third variable.

#include <stdio.h>
int main()
{
    int a , b;
    printf("Enter numbers to swap ");
    scanf("%d %d", &a, &b);

    printf("numbers before swap a=%d b=%d",a,b);
    a = a + b;                                              //a=30 (10+20)
    b = a - b;                                              //b=10 (30-20)
    a = a - b;                                              //a=20 (30-10)
    printf("\nNumbers after swap a=%d b=%d", a, b);
    return 0;
}