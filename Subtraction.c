#include <stdio.h>
int main()
{
    int a, b, sub;
    printf("enter first number");
    scanf("%d", &a);
    printf("enter second number");
    scanf("%d", &b);
    sub = a - b;
    printf("subtraction = %d", sub);
    return 0;
}