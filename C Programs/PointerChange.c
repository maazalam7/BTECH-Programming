#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr = &num;

    printf("before = %d\n", num);

    *ptr = 50;

    printf("after = %d\n", num);

    return 0;
}