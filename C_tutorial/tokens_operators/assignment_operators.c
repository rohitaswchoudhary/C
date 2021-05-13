// Assignment operators

// Assignment operators applied to assign the result of an expression to a variable. 
// C has a collection of shorthand assignment operators.

/*

Operator	Description
--------    ------------
=	        Assign
+=	        Increments then assign
-=	        Decrements then assign
*=	        Multiplies then assign
/=	        Divides then assign
%=	        Modulus then assign
<<=	        Left shift and assign
>>=	        Right shift and assign
&=	        Bitwise AND assign
^=	        Bitwise exclusive OR and assign
|=	        Bitwise inclusive OR and assign

*/

// example

#include <stdio.h>

int main() {

   int a = 21;
   int c ;

   c =  a;
   printf("1.) - =  Operator Example, Value of c = %d\n", c );

   c +=  a;
   printf("2.) - += Operator Example, Value of c = %d\n", c );

   c -=  a;
   printf("3.) - -= Operator Example, Value of c = %d\n", c );

   c *=  a;
   printf("4.) - *= Operator Example, Value of c = %d\n", c );

   c /=  a;
   printf("5.) - /= Operator Example, Value of c = %d\n", c );

   c  = 200;
   c %=  a;
   printf("6.) -%%= Operator Example, Value of c = %d\n", c ); // used %% insted of % as C cannot printf % simply 

   c <<=  2;
   printf("7.) - <<= Operator Example, Value of c = %d\n", c );

   c >>=  2;
   printf("8.) - >>= Operator Example, Value of c = %d\n", c );

   c &=  2;
   printf("9.) - &= Operator Example, Value of c = %d\n", c );

   c ^=  2;
   printf("10.) - ^= Operator Example, Value of c = %d\n", c );

   c |=  2;
   printf("11.) - |= Operator Example, Value of c = %d\n", c );
}


