/*
A variable is nothing but a name given to a storage area that our programs can manipulate. 
Each variable in C has a specific type, which determines the size and layout of the variable's memory; 
the range of values that can be stored within that memory; 
and the set of operations that can be applied to the variable.
*/

// variable declaration in C

#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main () {

   /* variable definition: */
   int a, b;
   int c;
   float f;
 
   /* actual initialization */
   a = 10;
   b = 20;
  
   c = a + b;
   printf("value of c : %d \n", c);

   f = 70.0/3.0;
   printf("value of f : %f \n", f);
 
   return 0;
}