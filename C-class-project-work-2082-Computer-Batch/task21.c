// WAP to enter an string then find vowel and consonant letters
// Written By Arix Ratgaiya

#include <stdio.h>
#include <string.h>

int main()
{
  char str[50];
  int v = 0;
  int c = 0;

  printf("Enter an string : ");
  scanf("%s", str);

  strlwr(str);

  for(int i = 0; i < strlen(str); i++)
  {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    {
      v++;
    }
    else
    {
      c++;
    }
  }
  printf("This is the vowel count : %d \n This is the consonant count : %d", v, c);
  return 0;
}