#include <stdio.h>
int main()
{
     // Written By Arix Ratgaiya | Tech Enthusiastic
     
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    num >= 0 ? printf("The absolute value of %d is %d\n", num, num) : printf("The absolute value of %d is %d\n", num, -num);

    return 0;
}