#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a, b;

    printf("enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("addition = %d\n", add(a, b));
    printf("subtraction = %d\n", subtract(a, b));
    printf("multiplication = %d\n", multiply(a, b));

    if (b != 0)
    {
        printf("division = %.2f\n", divide(a, b));
    }
    else
    {
        printf("division by zero is not allowed.\n");
    }

    return 0;
}