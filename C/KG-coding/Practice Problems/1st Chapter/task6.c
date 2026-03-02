#include <stdio.h>
int main()
{
    // Written By Arix Ratgaiya | Tech Enthusiastic
    
    char firstName[20];
    char lastName[20];
    int age;

    printf("Enter your first name: ");
    scanf("%s", &firstName);
    printf("Enter your last name: ");
    scanf("%s", &lastName);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello Mr.%s %s, Are you really %d years old?\n", firstName, lastName, age);

    return 0;
}