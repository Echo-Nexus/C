#include <stdio.h>
int main()
{
    //Written By Arix Ratgaiya | Tech Enthusiastic
    
    int num, last_num, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while(num != 0)
    {
        last_num = num % 10;
        sum += last_num;
        num /= 10;
    }

    printf("%d is the num of the entered number's digits.", sum);
    return 0;
}