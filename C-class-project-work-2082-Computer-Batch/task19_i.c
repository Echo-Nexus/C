// WAP to input an string and print it's length
// Written By Arix Ratgaiya

#include <stdio.h>
#include <string.h>

int main()
{
  char str[50];

  printf("Enter an string : ");
  scanf("%s", str);

  int len = strlen(str);
  printf("%d is the length of the string.", len);

  return 0;
}