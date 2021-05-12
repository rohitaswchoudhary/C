// Constants.

/**
Constants are like a variable, 
except that their value never changes during execution once defined.





#include<stdio.h>

main()
{
  const int SIDE = 10;
  int area;
  area = SIDE*SIDE;
  printf("The area of the square with side: %d is: %d sq. units"
  , SIDE, area);
}