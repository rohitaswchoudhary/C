/* C Program - Print Smiling Face on Console Screen */
		
#include<stdio.h>
// #include<conio.h>
void main()
{
	
	int sml=2, i, limit;   // ASCII code for smiling face is 2. 
	char smilly;

	printf("\nNumber of emojies you want to print on screen: ");
	scanf("%d", &limit);

	smilly = sml;  // compiler will convert data type to char
	 
	//  the data type of sml will remain unchanged. 
	printf("ASCII code for smilly is %d. \n\n",sml);  

	for ( i = 1; i <=limit; i++ )
	{
		printf("%d. %c ", i, smilly);     // implicit type conversion of int data type to char
	}
	// printf("\n");
	
}