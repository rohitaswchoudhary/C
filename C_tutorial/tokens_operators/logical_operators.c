// logical operators

// C provides three logical operators when we test more than 

/*
one condition to make decisions. 
These are: && (meaning logical AND), 
|| (meaning logical OR) and 
! (meaning logical NOT).

Operator	                        Description
--------                            -----------

&&	    And operator.       It performs logical conjunction of two expressions. 
                            (if both expressions evaluate to True, 
                            result is True. If either expression evaluates to False,
                            the result is False)
||	    Or operator.        It performs a logical disjunction on two expressions. 
                            (if either or both expressions evaluate to True, 
                            the result is True)
!	    Not operator.       It performs logical negation on an expression.

#include <stdio.h>

*/
#include<stdio.h>
void main() {

   int a = 5;
   int b = 20;
   int c ;

   if ( a && b ) {
      printf("Line 1 - Condition is true\n" );
   }
	
   if ( a || b ) {
      printf("Line 2 - Condition is true\n" );
   }
   
   /* lets change the value of  a and b */
   a = 0;
   b = 10;
	
   if ( a && b ) {
      printf("Line 3 - Condition is true\n" );
   } else {
      printf("Line 3 - Condition is not true\n" );
   }
	
   if ( !(a && b) ) {
      printf("Line 4 - Condition is true\n" );
   }
	
}