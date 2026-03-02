// WAP to reverse the entered number ?
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  int num, rev = 0, quotient;
  printf("Enter an number : ");
  scanf("%d", &num);

  while(num != 0)
  {
    quotient = num % 10;
    rev = rev * 10 + quotient;
    num /= 10;
  }

  printf("The reverse of the entered number is : %d", rev);
  return 0;
}