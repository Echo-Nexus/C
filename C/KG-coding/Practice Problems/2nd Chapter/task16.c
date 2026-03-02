#include <stdio.h>
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
    float SI = (P * T * R) / 100.0;
    printf("\n Simple Interest is : %.2f\n", SI);

    return 0;

}