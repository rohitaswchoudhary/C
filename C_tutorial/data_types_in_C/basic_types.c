/*

Basic Types:
------------

They are arithmetic types and are further classified into: 
(a) integer types and (b) floating-point types.

a) Integer Types:
    The following table provides the details of standard integer 
    types with their storage sizes and value ranges −
------------------------------------------------------------------
Type	            Storage size	                Value range
-----               -------------                   ------------
char	            1 byte	                    -128 to 127 or 0 to 255
unsigned char	    1 byte	                     0 to 255
signed char	        1 byte	                    -128 to 127
int	                2 or 4 bytes	            -32,768 to 32,767 or -2,147,483,648 to 2,147,483,647
unsigned int	    2 or 4 bytes	             0 to 65,535 or 0 to 4,294,967,295
short	            2 bytes	                    -32,768 to 32,767
unsigned short	    2 bytes	                        0 to 65,535
long	            8 bytes(4bytes for 32bit)	    -9223372036854775808 to 9223372036854775807
unsigned long	    8 bytes	                        0 to 18446744073709551615

*/

// this example will let you know the exact size of diffirent data types.


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

// these are header files about which we will study later...

int main(int argc, char** argv) {

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);   //short maximum value
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);   //short minimum value
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;
}

/* 

b) floating point types: 

Type	        Storage size	   Value range	            Precision
------          ------------       ------------             ----------
float	        4 byte	           1.2E-38 to 3.4E+38	    6 decimal places
double	        8 byte	           2.3E-308 to 1.7E+308	    15 decimal places
long double	    10 byte	           3.4E-4932 to 1.1E+4932	19 decimal places


comment the above code and uncomment the below one to execute.


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char** argv) {

    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}

*/

// NOTE:

// their are two more data types: derived data types and user defined data types, about which 
// we will study later...