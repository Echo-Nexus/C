// WAP to find that the given string is palindrome or not 
// Written By Arix Ratgaiya

#include <stdio.h>
#include <string.h>

int main() 
{
  char str[30], str_cpy[30];
  printf("Enter an string : ");
  scanf("%s", str);
  strcpy(str_cpy, str);
  strrev(str_cpy);

  if(strcmp(str, str_cpy) == 0)
  {
    printf("%s is palindrome.", str);
  }
  else
  {
    printf("%s is not palindrome.", str);
  }
  return 0;
}