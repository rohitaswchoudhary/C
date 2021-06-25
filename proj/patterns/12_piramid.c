// 2021-06-11 


// write a program to print a pyramid pattern


#include <stdio.h>
int main()
{
  int n, m;
  printf("Enter the number of rows yo want in piramid pattern: ");
  scanf("%d", &n);

  m=n;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m - 1; j++)
    {
      printf("  ");
    }
    for (int k = 1; k <= 2 * i - 1; k++)
    {
      printf("* ");
    }
    m--;

    printf("\n");
  }
  return 0;
}