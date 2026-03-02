// WAP to find the factorial of the entered number ?
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  int num;
  long long factorial;

  printf("Enter an number to find it's factorial : ");
  scanf("%d", &num);

  if (num > 20)
  {
    printf("Sorry, I can't handel this large number's factorial.");
  }
  else
  {
    if (num == 0 || num == 1) // Special case for the factorial.
    {
      factorial = 1;
    }
    else
    {
      factorial = num;
      while (num > 1)
      {
        num--;
        factorial *= num;
      }
    }
    printf("The factorial is : %lld", factorial);
  }

  return 0;
}