#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is the largest number.", a);
    }
    else
    {
        printf("%d is the largest number.", b);
    }

    return 0;
}