#include <stdio.h>
int main()
{   
    // Written By Arix Ratgaiya | Tech Enthusiastic
    int num, i=1;
    printf("Enter a number : ");
    scanf("%d", &num);
    
    while(i <= 10 )
    {
            printf("\n %d x %d = %d",num, i, num*i);
            i++;
    }

    printf("\nThis is the table of %d. ", num);

    
    return 0;
}