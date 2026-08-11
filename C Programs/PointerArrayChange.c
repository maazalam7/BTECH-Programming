#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers;

    printf("before:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    *(ptr + 2) = 100;

    printf("\nafter:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}