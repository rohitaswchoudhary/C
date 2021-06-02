// write a program to print size and range of each data Types in your system.


#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>

int sizes(), ranges(); //function declaration     you can remove this as we used
//  implicit declaration of function, but it will so yo a warning.
int main(void)
{
    sizes();      // calling function
    ranges();     // calling function

    return 0;
}

int sizes() //function definition
{
    printf("\n\nSize of C data types:\n\n");
    printf("Type               Bytes\n");
    printf("--------------------------------\n\n");
    printf("char                 %lu\n", sizeof(char));
    printf("int8_t               %lu\n", sizeof(int8_t));
    printf("unsigned char        %lu\n", sizeof(unsigned char));
    printf("uint8_t              %lu\n", sizeof(uint8_t));
    printf("short                %lu\n", sizeof(short));
    printf("int16_t              %lu\n", sizeof(int16_t));
    printf("uint16t              %lu\n", sizeof(uint16_t));
    printf("int                  %lu\n", sizeof(int));
    printf("unsigned             %lu\n", sizeof(unsigned));
    printf("long                 %lu\n", sizeof(long));
    printf("unsigned long        %lu\n", sizeof(unsigned long));
    printf("int32_t              %lu\n", sizeof(int32_t));
    printf("uint32_t             %lu\n", sizeof(uint32_t));
    printf("long long            %lu\n", sizeof(long long));
    printf("int64_t              %lu\n", sizeof(int64_t));
    printf("unsigned long long   %lu\n", sizeof(unsigned long long));
    printf("uint64_t             %lu\n", sizeof(uint64_t));
    printf("float                %lu\n", sizeof(float));
    printf("double               %lu\n", sizeof(double));
    printf("long double          %lu\n", sizeof(long double));
    printf("_Bool                %lu\n", sizeof(_Bool));
    printf("\n");

    return 0;
}

int ranges()  // function declaration
{
    printf("Ranges for integer data types in C\n\n");

    printf("Type               minimum      maximum\n");
    printf("------------------------------------------------------------\n");
    printf("int8_t    %20d  %20d\n", SCHAR_MIN, SCHAR_MAX);
    printf("int16_t   %20d  %20d\n", SHRT_MIN, SHRT_MAX);
    printf("int32_t   %20d  %20d\n", INT_MIN, INT_MAX);
    printf("int64_t   %20lld  %20lld\n", LLONG_MIN, LLONG_MAX);
    printf("uint8_t   %20d  %20d\n", 0, UCHAR_MAX);
    printf("uint16_t  %20d  %20d\n", 0, USHRT_MAX);
    printf("uint32_t  %20d  %20u\n", 0, UINT_MAX);
    printf("uint64_t  %20d  %20llu\n", 0, ULLONG_MAX);
    printf("\n");
    printf("============================================================\n\n");
    printf("Ranges for real number data types in C\n\n");
    printf("------------------------------------------------------------\n");
    printf("flaot        %14.7g  %14.7g\n", FLT_MIN, FLT_MAX);
    printf("double       %14.7g  %14.7g\n", DBL_MIN, DBL_MAX);
    printf("long double  %14.7Lg  %14.7Lg\n", LDBL_MIN, LDBL_MAX);
    printf("\n");
    return 0;
}
