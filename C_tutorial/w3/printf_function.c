// Formatted Output and the printf function

#include <stdio.h>

void main()
{
    int escape_sequence(), format_specifier();
    printf("You are learning printf() function\n");

    printf("\nEscape sequences in C\n");
    printf("---------------------\n\n");

    escape_sequence();

    printf("\n\nFormat specifiers:\n");
    printf("------------------\n\n");
    format_specifier();
}

int escape_sequence()
{
    printf("Create a new line with \\n\n");
    printf("Print a double quotes (\") within a string\n");
    printf("Print a single quotes (\') within a string\n");
    printf("Print a Backslash\\ within a string\n");
    printf("Using Backspace\b within a string\n");
    printf("Using\tTab within a string\n");
}

/* 
Format specifiers
------------------

Parameter	        Meaning
-----------------------------
%f	        Print a floating point number ( in the form dddd.dddddd).
%d	        Print an integer number printed in decimal (preceded by a minus sign if the number is negative).
%E	        Print a floating point number ( in scientific notation: d.dddEddd).
%g	        Print a floating point number (either as f or E, depending on value and precision).
%x	        Print an integer number in hexadecimal with lower case letters.
%X	        Print an integer number printed in hexadecimal with upper case letters.
%c	        Print a character.
%s	        Print a string.
*/

int format_specifier()
{
    char a;
    int i;
    float x, y;
    a = 'G';
    x = 5.23;
    y = 76000000.00;
    printf("%c %f %g %E %s\n", a, x, y, y, "String");
    printf("Hexadecimal(lower case) of 12 is %x\n", 12);
    printf("Hexadecimal(upper case) of 12 is %X\n", 12);
    for (int i = 0; i < 100; i++)
    {
        printf("hexadecimal(upper case) of %d is %X\n", i, i);
    }
}
