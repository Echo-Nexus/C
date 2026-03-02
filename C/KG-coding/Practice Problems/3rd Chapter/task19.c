#include <stdio.h>
int main()
{
     // Written By Arix Ratgaiya | Tech Enthusiastic

    int num;
    printf("Enter an integer: ");
    scanf(" %d", &num);
    if(num > 0)
    {
        printf("The number is positive. \n");
    }
    else if (num < 0)
    {
        printf("The number is negative. \n");
    }
    else 
    {
        printf("The number is zero. \n");
    }


    return 0;

}