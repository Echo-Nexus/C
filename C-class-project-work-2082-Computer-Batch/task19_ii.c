// WAP to input an string and also find the reverse
// Written By Arix Ratgaiya

#include <stdio.h>
#include <string.h>

int main()
{
  char str[50];
  printf("Enter an string : ");
  scanf("%s", str);
  strrev(str);
  printf("%s", str);
  return 0;
}