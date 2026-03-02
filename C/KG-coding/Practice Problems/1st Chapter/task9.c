#include <stdio.h>
int main()
{
    // Written By Arix Ratgaiya | Tech Enthusiastic
    
    const float PI = 3.14159;
    int radius;
    printf("Enter the radius of the circle in meter : ");
    scanf("%d", &radius);
    float area = radius * PI * radius;
    printf(" The area of the circle is : %.2f m\n", area);
    
    
    return 0;
}