#include<stdio.h>

void main(){
    //set a and b both equal to 10.
    int a=10, b=10, count = 5;
    
    //Print them and decrementing each time.
    //Used postfix mode for a and prefix mode for b.
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);
    printf("\n%d %d",a--,--b);

    for (int i = 0; i < count; i++)
    {
        printf("\n%d %d",a--,--b);

    }
    
}

