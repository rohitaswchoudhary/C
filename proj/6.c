// a mind blowing C program.

// try running without debugging and the to understand concept run with debugging mode.

// try to google the warning message provided by compiler.


#include <stdio.h>
#include <limits.h>

void compare(int a)
{
    if ((a + 1) > a)
        printf("%d > %d\n", (a + 1), a);
    else
        printf("%d <= %d\n", (a + 1), a);
}

int main()
{
   
    int i = 33;
    printf("%d\n", 1 << 33);
    printf("%d\n", 1 << i);

    compare(1);
    compare(INT_MAX);
}