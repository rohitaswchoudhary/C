// 2021-06-07 06:24:06

#include<stdio.h>

int main()
{
    float length, breadth, perimeter ,area;

    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &breadth);

    perimeter = 2*(length+breadth);

    printf("\n\nPeremeter of rectangle is: %f ",perimeter);

    area = length*breadth;

    printf("\nArea of rectangle is: %f ",area);

    return area;

}