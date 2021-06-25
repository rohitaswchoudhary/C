#include<stdio.h>

// function for taking input from user
float input()
{
  float n;
  scanf("%f",&n);
  return n;
}

// function for displaying the result
void display(float n1, float n2, char ch, float result)
{
  printf("%.2f %c %.2f = %.2f\n", n1, ch, n2, result);
}


// function for addition of two numbers
void add(int n1)
{
  float result= 0;
  char ch1;
  float num3;
  do{
    printf("num: ");
    scanf("%f",num3);
    result += num3;
     printf("\nsum: %f\n", result);
//   display2(n1, '+',(float)n1, (float) result);
    printf("\nchoice(q): ");
    scanf("%c",&ch1);
    scanf("%c",&ch1);
  }
  while(ch1!='q');
}

// function for subtraction of two numbers
void subtract(float n1, float n2)
{
  float result;
  result = n1 - n2;
  display(n1, n2, '-', result);
}

// function for multiplication of two numbers
void multiply(float n1, float n2)
{
  float result;
  result = n1 * n2;
  display(n1, n2, '*', result);
}

// function for division of two numbers
void divide(float n1, float n2)
{
  float result;
  result = n1 / n2;
  display(n1, n2, '/', result);
}

// main function
int main()
{
  char ch;
  int choice;
  float n1, n2;

  // do-while loop
  do
  {

     
    printf("\nWhich operation you want to perform,\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
     
    switch (choice) {
      case 1:
        add(n1);
        break;
      case 2:
        subtract(n1, n2);
        break;
      case 3:
        multiply(n1, n2);
        break;
      case 4:
        divide(n1, n2);
        break;
      default:
        printf("Invalid choice");
    }

    printf("\nDo you want to continue (y/n): ");
    scanf("%c",&ch);
    scanf("%c",&ch);
    printf("***************************************\n");

  } while(ch=='y');

  printf("\nThank You.");
  return 0;
}