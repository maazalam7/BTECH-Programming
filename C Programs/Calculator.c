#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("enter first number: ");
    scanf("%f", &a);

    printf("enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("enter second number: ");
    scanf("%f", &b);

    if (op == '+')
        printf("answer = %.2f", a + b);
    else if (op == '-')
        printf("answer = %.2f", a - b);
    else if (op == '*')
        printf("answer = %.2f", a * b);
    else if (op == '/')
        printf("answer = %.2f", a / b);
    else
        printf("invalid operator!");

    return 0;
}