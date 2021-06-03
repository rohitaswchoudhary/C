// program to read and print elements of an array.

#include <stdio.h>

int num[10];

void main()
{
    int i;

    printf("input 10 elements in an 1D-array: \n\n");

    for (i = 0; i < 10; i++)
    {
        printf("\telement at index -%d : ", i);
        scanf("%d", &num[i]);
    }

    printf("elements in array are: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }

    printf("\n");
}