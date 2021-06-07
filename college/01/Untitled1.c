# include<stdio.h>

int main()
{
	int num1, num2, product;

	printf("\nEnter the value of the first number: \n");
	scanf("%d", &num1);
	printf("\nEnter the value of the second number: \n");
	scanf("%d", &num2);

	product = num1*num2;

	printf("Product of the two numbers %d and %d is %d\n", num1, num2, product);
    
	return 0;
}