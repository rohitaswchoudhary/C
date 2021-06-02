/* C Program - Print Smiling Face on Screen */
		
#include<stdio.h>
#include<conio.h>
void main()
{
	// clrscr();
	int sml=1, i, limit, d=46;   // ASCII code for smiling face is 1. 

// you can play around with other integers and check what comes. 

	printf("How many smiley face you want to print ? ");
	scanf("%d",&limit);
	for(i=1; i<limit+1; i++)
	{
        printf("%d",i);
        printf("%c",d);
		printf("%c ",sml);
	}
}
