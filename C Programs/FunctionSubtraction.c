#include <stdio.h>

int subtract(int a, int b)
{
    return a - b;
}

int main()
{
    int result;

    result = subtract(30, 10);

    printf("difference = %d", result);

    return 0;
}