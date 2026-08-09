#include <stdio.h>

int main()
{
    int numbers[5];

    printf("enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("reverse order:\n");

    for (int i = 4; i >= 0; i--)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}