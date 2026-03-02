#include <stdio.h>
#include <math.h>

int main()
{
    // Written By Arix Ratgaiya | Tech Enthusiastic
    
    float P, T, R;
    printf("Enter Principal amount : ");
    scanf("%f", &P);
    printf("Enter Time in years : "); 
    scanf("%f", &T);
    printf("Enter Rate of interest : ");
    scanf("%f", &R);
    float CI = P * pow((1 + R / 100.0), T) - P;
    printf("\n Compound Interest is : %.2f\n", CI);

    return 0;

}