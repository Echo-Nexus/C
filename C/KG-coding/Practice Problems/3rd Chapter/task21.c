#include <stdio.h>
int main()
{
     // Written By Arix Ratgaiya | Tech Enthusiastic
     
    int num1, num2, num3;
    printf("Enter an num1: ");
    scanf(" %d", &num1);
    printf("Enter an num2: ");
    scanf(" %d", &num2);
    printf("Enter an num3: ");
    scanf(" %d", &num3);
    if(num1 >= num2 && num1 >= num3)
    {
        printf("The first number is greatest. \n");
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("The second number is greatest. \n");
    }
    else 
    {
        printf("The third number is the greatest. \n");
    }


    return 0;

}