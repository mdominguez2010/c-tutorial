#include <stdio.h>
#include <stdlib.h> 
#include <math.h> //must include to call math functions

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter operation: ");
    scanf(" %c", &op);

    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+')
    {
        printf("%f\n", num1 + num2);
    } else if(op == '-')
    {
        printf("%f\n", num1 - num2);
    } else if(op == '*')
    {
        printf("%f\n", num1 * num2);
    } else if(op == '/')
    {
        printf("%f\n", num1 / num2);
    } else
    {
        printf("That's an invalid operation!\n");
    }

    return 0;
}