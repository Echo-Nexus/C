#include <stdio.h>
int main()
{
    // Written By Arix Ratgaiya | Tech Enthusiastic
    
    float num1, num2;
    char sign;
    printf("Enter num1 integers: ");
    scanf(" %f", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &sign);
    printf("Enter num2 integers: ");
    scanf(" %f", &num2);
    
    switch (sign)
    {
    case '+':
      printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
      break;
    case '-':
      printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
      break;
    case '*':
      printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
      break;
    case '/':
      printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
      break;

    default:
      printf("Invalid operator");
      break;
    }

    return 0;
}