#include <stdio.h>
int main()
{
     // Written By Arix Ratgaiya | Tech Enthusiastic

    int mark;
    printf("Enter your mark : ");
    scanf("%d", &mark);

    mark >= 80 && mark <= 100 ? printf("High \n") : (mark >= 50 && mark < 80 ? printf("Medium \n") : printf("Low \n"));


    return 0;
}