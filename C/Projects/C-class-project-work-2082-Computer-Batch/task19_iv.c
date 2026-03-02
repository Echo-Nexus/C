// WAP to input a string in Lowercase and then to print into Uppercase
// Written By Arix Ratgaiya

#include <stdio.h>
#include <string.h>

int main()
{
  char str[20];
  printf("Enter an str : ");
  scanf("%s", str);
  strupr(str);
  printf("This is the upper case : %s", str);
  return 0;
}