// WAP to input a string in Uppercase and then to print into Lowercase
// Written By Arix Ratgaiya

#include <stdio.h>
#include <string.h>

int main()
{
  char str[20];
  printf("Enter an str : ");
  scanf("%s", str);
  strlwr(str);
  printf("This is the lower case : %s", str);
  return 0;
}