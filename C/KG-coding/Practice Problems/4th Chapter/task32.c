#include <stdio.h>
int main()
{
    // Written By Arix Ratgaiya | Tech Enthusiastic
    int num, i = 1, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (i <= num)
    {
      if(i % 2 != 0){
        sum += i;
      }

      i++;
    }
    
    printf("%d is the sum of odd numbers lies in between %d natural numbers.", sum, num);
    return 0;
}