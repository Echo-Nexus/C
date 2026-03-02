#include <stdio.h>
int main()
{
     // Written By Arix Ratgaiya | Tech Enthusiastic
     
    int per;
    printf("Enter your per:");
    scanf("%d", &per);

    if (per <= 100 && per >= 90)
    {
      printf("Your grade is A");
    }
    else if (per <= 90 && per >= 75)
    {
      printf("Your grade is B");
    }
    else if (per <= 75 && per >= 60)
    {
      printf("Your grade is C");
    }
    else if (per <= 60 && per >= 30)
    {
      printf("Your grade is D");
    }
    else
    {
      printf("Your grade is Fail");
    }
    
    return 0;
}