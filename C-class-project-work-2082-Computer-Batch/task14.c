// WAP to find the sum of each digits ?
// Written By Arix Ratgaiya 

#include <stdio.h>

int main()
{
  int num, originalNum, quotient, sum = 0;
  printf("Enter an number : ");
  scanf("%d", &num);

  originalNum = num;

  while(num != 0)
  {
    quotient = num % 10;
    sum += quotient;
    num /= 10;
  }

  printf("The sum of the digits of this %d is : %d", originalNum, sum );

  return 0;
}