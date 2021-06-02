// 2021-06-02 12:29:52
// nested if else statements.

// write a program in C to compare 3 numbers and find minimum of them.

#include<stdio.h>
main()
{
int num1=5, num2=3, num3=-12, min;
 if(num1<num2)
  {
   if(num1<num3)
     min = num1;
   else
     min = num3;
  }
 else
  {
   if(num2<num3)
    min = num2;
    else
	min = num3;
  }
 printf("Among %d, %d, %d minimum number is %d",num1,num2,num3,min);
}
