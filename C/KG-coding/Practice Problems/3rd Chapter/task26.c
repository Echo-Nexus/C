#include <stdio.h>
int main()
{
     // Written By Arix Ratgaiya | Tech Enthusiastic
     
    int num;
    printf("Enter integers: ");
    scanf(" %d", &num);

    num % 2 == 0 ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
    return 0;
}