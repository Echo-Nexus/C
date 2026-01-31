// WAP to find that entered number is positive, negative or zero ?
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  int num;
  printf("Enter an number : ");
  scanf("%d", &num);

  if(num > 0)
  {
    printf("%d is positive.", num);
  }
  else if( num < 0)
  {
    printf("%d is negative.", num);
  }
  else 
  {
    printf("%d is zero.", num);
  }

  return 0;
}
