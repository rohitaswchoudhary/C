//Relational operators

// Relational operators are used to comparing two quantities or values.

/*

-----------------------
Operator	Description
-----------------------
==	        Is equal to
!=	        Is not equal to
>	        Greater than
<	        Less than
>=	        Greater than or equal to
<=	        Less than or equal to

*/

#include<stdio.h>
#include<conio.h>

int main(){
     int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num%2 == 0)
        printf("\nIt's(%d) an even number.",num);
    else
        printf("\nIt's(%d) an odd number.",num);
    getch();
    return 0;
    
}

