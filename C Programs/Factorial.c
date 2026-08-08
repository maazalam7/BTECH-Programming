#include <stdio.h>

int main()
{
    int num;
    long long factorial = 1;

    printf("enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }

    printf("factorial = %lld", factorial);

    return 0;
}