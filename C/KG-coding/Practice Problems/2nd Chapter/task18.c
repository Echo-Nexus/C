#include <stdio.h>
int main()
{
     // Written By Arix Ratgaiya | Tech Enthusiastic
     
    float C, F;
    printf("Enter Temperature in Celsius : ");
    scanf("%f", &C);
    F = (C * 9.0 / 5.0) + 32;
    printf("\n Temperature in Fahrenheit is : %.2f\n", F);

    return 0;

}
