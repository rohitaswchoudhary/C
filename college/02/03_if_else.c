#include <stdio.h>

int main() 

<%
   int a, b;

    printf("enter two numbers a and b: ");

    scanf("%d %d", &a, &b);

    printf("value of a = %d", a);
    printf("\nvalue of b = %d\n\n", b);

   if(a > b)
      printf("%d is greater than %d\n",a,b);
   else
      printf("%d is smaller than %d", a ,b);

   return 3000;
   
%>
