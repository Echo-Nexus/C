// WAP to find the fabanacci series ?
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  int a = 0, b = 1, c, num, i = 0;
  printf("Enter a num : ");
  scanf("%d", &num);

  printf("Fabonacci Series : \n");
  while(i < num)
  {
    printf(" %d \n", a );
    c = a + b;
    a = b;
    b = c;
    i++;
  }
  
  return 0;
}