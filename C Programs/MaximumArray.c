#include <stdio.h>

int main()
{
    int numbers[5];
    int max;

    printf("enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    printf("maximum number = %d", max);

    return 0;
}