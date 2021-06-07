// 2021-06-07 06:55:36

#include<stdio.h>

int main() {
    int a, b, c, max;
    printf("Enter three numbers:");
    printf("\n\ta:");
    scanf("%d", & a);
    printf("\tb:");
    scanf("%d", & b);
    printf("\tc:");
    scanf("%d", & c);
    max = a > b ? (a > b ? a : c) : (b > c ? b : c);

    printf("%d is the largest number amoung %d, %d and %d.", max, a, b, c);

}