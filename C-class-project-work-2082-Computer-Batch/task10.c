// WAP to find the entered number is palindrome or not ?
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  int num, originalNum, rev = 0, quotient;
  printf("Enter an number : ");
  scanf("%d", &num);

  originalNum = num;

  while (num != 0)
  {
    quotient = num % 10;
    rev = rev * 10 + quotient;
    num /= 10;
  }

  if(originalNum == rev)
  {
    printf("%d is palindrome.", originalNum);
  }
  else
  {
    printf("%d is not a palindrome.", originalNum);
  }

  return 0;
  
}