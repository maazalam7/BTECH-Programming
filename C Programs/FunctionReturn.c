#include <stdio.h>

int square(int num)
{
    return num * num;
}

int main()
{
    int result;

    result = square(5);

    printf("square = %d", result);

    return 0;
}