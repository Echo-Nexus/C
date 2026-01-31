// WAP to find the entered number is a Armstrong Number or not ?
// Written By Arix Ratgaiya

#include <stdio.h>
#include <math.h>

int main()
{
  int num, originalNum, remainder, digits = 0;
  double result = 0;
  printf("Enter an num : ");
  scanf("%d", &num);

  originalNum = num;

  while(originalNum != 0)
  {
    originalNum /= 10;
    digits++;
  }

  originalNum = num;
  while(originalNum != 0)
  {
    remainder = originalNum % 10;
    result += pow(remainder, digits);
    originalNum /= 10;
  }


  if((int)result == num)
  {
    printf("This %d is Armstrong.", num);
  }
  else 
  {
    printf("This %d is not an Armstrong.", num);
  }

  return 0;
}