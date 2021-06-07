#include <stdio.h>
int main(int argc, char **argv)
{
#if __STDC_VERSION__ >= 201710L
    printf("You are using C18!\n");
#elif __STDC_VERSION__ >= 201112L
    printf("You are using C11!\n");
#elif __STDC_VERSION__ >= 199901L
    printf("You are using C99!\n");
#else
    printf("You are using C89/C90!\n");
#endif
    return 0;
}
