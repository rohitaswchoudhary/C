#include<stdio.h>

void main()

{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value of a[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("\nThe array is : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");
}