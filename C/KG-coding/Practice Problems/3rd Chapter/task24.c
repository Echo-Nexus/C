#include <stdio.h>
int main()
{
     // Written By Arix Ratgaiya | Tech Enthusiastic
     
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age < 13)
    {
        printf("You are a child. \n");
    }
    else if(age >= 13 && age < 20)
    {
        printf("You are a teenager. \n");
    }
    else if (age >= 20 && age < 60)
    {
        printf("You are an adult. \n");
    }
    else
    {
        printf("You are a senior citizen. \n");
    }


    return 0;
}