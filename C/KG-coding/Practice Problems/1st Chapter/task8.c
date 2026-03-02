#include <stdio.h>
#define PI 3.14159
int main()
{
    // Written By Arix Ratgaiya | Tech Enthusiastic
    
    int radius;
    printf("Enter the radius of the circle in meter : ");
    scanf("%d", &radius);
    float circumfrence = 2 * PI * radius;
    printf(" The circumference of the circle is : %.2f m\n", circumfrence);
    
    
    return 0;
}