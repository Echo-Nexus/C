// WAP to concatinate two strings
// Written By Arix Ratgaiya

#include <stdio.h>
#include <string.h>

int main()
{
  char str1[20], str2[20];
  printf("Enter first string : ");
  scanf("%s", str1);
  printf("Enter second string : ");
  scanf("%s", str2);

  strcat(str1, str2);
  printf("%s is the concatenated strings.", str1);
  return 0;
}