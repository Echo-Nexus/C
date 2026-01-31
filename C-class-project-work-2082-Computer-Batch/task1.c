// WAP to calculate the Simple Interest
// Written By Arix Ratgaiya

#include <stdio.h>

int main()
{
  float P, T, R, SI;

  printf("Enter the Principle : ");
  scanf("%f", &P);
  
  printf("Enter the Time : ");
  scanf("%f", &T);

  printf("Enter the Rate : ");
  scanf("%f", &R);

  SI = (P * T * R) / 100;
  
  printf("This is the Simple Interest of  Rs %.2f in %.0f years with %.2f%% Rate is : %.2f", P, T, R, SI);

  return 0;
}