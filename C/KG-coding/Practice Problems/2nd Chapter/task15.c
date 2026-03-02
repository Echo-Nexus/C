#include <stdio.h>
int main()
{
    // Written By Arix Ratgaiya | Tech Enthusiastic
    
    int base, height;
    printf("Enter base of the right angled triangle :");
    scanf("%d42", &base);
    printf("Enter height of the right angled triangle :");
    scanf("%d", &height);
    float area = 0.5 * base * height;
    printf("\n Area of the right angled triangle is : %.2f\n", area);

    return 0;
}