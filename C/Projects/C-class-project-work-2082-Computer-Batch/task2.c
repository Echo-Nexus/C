// WAP to calculate the volume of cylinder
// Written By Arix Ratgaiya

#include <stdio.h>

#define PI 3.14

int main()
{
  float r, h, vol;

  printf("Enter radius : ");
  scanf("%f", &r);

  printf("Enter height : ");
  scanf("%f", &h);

  vol = PI * r * r * h;

  printf("The volume of cylinder of radius %.2f and height %.2f is %.2f.", r, h, vol);

  return 0;
}