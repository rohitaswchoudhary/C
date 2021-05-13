// Constants.

/**
Constants are like a variable, 
except that their value never changes during execution once defined.

-------
*syntax: --> const type constant_name;

-------

C Constants is the most fundamental and essential part of the C programming language. 
Constants in C are the fixed values that are used in a program, 
and its value remains the same during the entire execution of the program.

Constants are also called literals.
Constants can be any of the data types.
It is considered best practice to define constants using only upper-case names.

*/



#include<stdio.h>

main()
{
  const int SIDE = 10;
  int area;
  area = SIDE*SIDE;
  printf("The area of the square with side: %d is: %d sq. units"
  , SIDE, area);
}

// here const type is int and variable is SIDE which is assigned valueis 10.

// Putting const either before or after the type is possible.

// example
// int const SIDE = 10;
// const int SIDE = 10;     >>> both will work, you can try.


 
/*  Constant types in C:
1.Primary constants:
    a. Numeric Constants
        i. Integer Constants  --> decimal constant, hex constant, oct constant.
        ii. Real Constants    -->  99.25 real or floating point constant.

    b. Character Constants
        i. Single Character Constants  --> "X", "5"
        ii. String Constants            --> "hello","2015"
        iii. Backslash Character Constants --> \t,\n,\a ,etc.

2. Secondary constants:
        Arrays
        Pointer
        Structure
        Union
        Enum
*/

