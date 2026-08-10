#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;

    printf("value = %d\n", num);
    printf("value using pointer = %d\n", *ptr);

    return 0;
}