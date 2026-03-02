#include <stdio.h>
int main()
{
     // Written By Arix Ratgaiya | Tech Enthusiastic
     
    int num1, num2 ;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2  : ");
    scanf("%d", &num2 );
    
    num1 > num2 ? printf("%d is greater than %d \n", num1, num2) : (num1 < num2 ? printf("%d is grater than %d \n", num2, num1) : printf("%d and %d are equal to each other.\n", num1, num2));


    return 0;

}