#include <stdio.h>
void main()
{
    int int1, int2;

    printf("Program to compare to user given number.\n\n");

    printf("Input the values for first number : ");
    scanf("%d", &int1);
    printf("Input the values for second number : ");
    scanf("%d", &int2);



    if (int1 == int2)
        printf("\n%d and %d are equal\n", int1, int2);
    else
        printf("\n%d and %d are not equal\n", int1, int2);


}
