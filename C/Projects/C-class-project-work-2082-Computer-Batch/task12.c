// WAP to find the sum of n entered digits ?
// Written By Arix Ratgaiya

#include <stdio.h>

int main() 
{
  int num, sum = 0, i = 1;
  printf("Enter an number : ");
  scanf("%d", &num);

  while (i <= num)
  {
    sum += i;
    i++;
  }
  printf("The sum of %d digits is : %d", num, sum);
  
  return 0;
}