#include<stdio.h>

int main() {
   int i = 0;
   char ch;

   for (i = 0; i < 255; i++) {
      printf("ascii code.%i its symbol is  %c \n ",i,ch);
      ch = ch + 1;
   }
   return 0;
}
