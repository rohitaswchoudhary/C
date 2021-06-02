#include<stdio.h>

int main(){
	
	for (int i = 0; i < RADIUS*2; i++)
{
for (int j = 0; j < RADIUS*2; j++)
{
if (i * i + j * j == RADIUS * RADIUS)
{
printf("0");
} else {
printf(" ");
}

if (j == RADIUS*2)
{
printf("\n");
}
}
}

	
	
	
	
	
	
}






