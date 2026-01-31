// WAP to find the largest number among 10 numbers using array 
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  int num[] = {10, 30, 43, 75, 54, 34, 84, 73, 27, 25};
  int greatest = num[0];
  for(int i = 0; i < 10; i++)
  {
    if(num[i] >= greatest)
    {
      greatest = num[i];
    }
  }
  printf("%d is the greatest among.", greatest);
  return 0;
}