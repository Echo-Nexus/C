// WAP to print the multiplication table of the entered number ?
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  int num, i = 1;
  printf("Enter a number which you want to print the multiplication table of : ");
  scanf("%d", &num);

  while(i <= 10)
  {
    printf("%d x %d = %d \n", num, i, num * i);
    i++;
  }

  return 0;
}