// 2021-05-10
// program to get sum of two numbers

#include<stdio.h>

void main()
{
	int num1, num2, sum;

	printf("Enter the numbers you want to sum\n\n");
	
	printf("enter the first number:\n");
	scanf("%d",&num1);
	
	printf("\nenter the second number:\n");
	scanf("%d",&num2);
	
	sum = num1+num2;
	
	printf("\nsum of two numbers %d and %d is : %d",num1, num2, sum);
	
	getchar();
	
	
}