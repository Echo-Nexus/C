// WAP to find the even and odd of the given number :
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  int num; 
  printf("Enter an number : ");
  scanf("%d", &num);

  if(num % 2 == 0)
  {
    printf("%d is even number.", num);
  }
  else 
  {
    printf("%d is odd number.", num);
  }

  return 0;
}