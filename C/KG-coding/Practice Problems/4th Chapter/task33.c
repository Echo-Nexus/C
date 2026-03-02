#include <stdio.h>
int main()
{
  // Written By Arix Ratgaiya | Tech Enthusiastic
  // Note : It can only handel up to 20 numbers.
  int num;
  long long factorial;

  printf("Enter a number to find the factorial of it : ");
  scanf("%d", &num);

 
  if (num > 20)  //Checking if num > 20 
  {
    printf("\n\nSorry, I cannot handel this big number. Try again!!! between 0-20 : \n\n");
  }
  else
  {
    if (num < 0)
    {
      printf("Entered number is not defined for factorial numbers.");
    }
    else if (num == 0 || num == 1) //Special Cases for factorial numbers
    {
      factorial = 1;
    }
    else
    {
      factorial = num;
      while (num > 1) //Real code for factorial
      {
        num--;
        factorial *= num;
      }
    }
    printf("This is the factorial number : %lld.", factorial);
  }

  return 0;
}
