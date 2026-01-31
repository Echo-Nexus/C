// WAP to find the largest number among the three number ?
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  int num1, num2, num3;
  printf("Enter the num1 : ");
  scanf("%d", &num1);
  printf("Enter the num2 : ");
  scanf("%d", &num2);
  printf("Enter the num3 : ");
  scanf("%d", &num3);

  if(num1 > num2 && num1 > num3)
  {
    printf("%d is the greatest.", num1);
  }
  else if(num2 > num3 && num2 > num1)
  {
    printf("%d is the greatest.", num2);
  }
  else 
  {
    printf("%d is the greatest.", num3);
  }

  return 0;
}