// WAP to find that the user is eligible for vote or not ?
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  int age;
  printf("Enter your age : ");
  scanf("%d", &age);
  
  if(age >= 18 && age <= 110)
  {
    printf("You can vote.");
  }
  else 
  {
    printf("You cannot vote.");
  }

  return 0;
}