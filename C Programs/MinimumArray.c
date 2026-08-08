#include <stdio.h>

int main()
{
    int numbers[5];
    int min;

    printf("enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    min = numbers[0];

    for (int i = 1; i < 5; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    printf("minimum number = %d", min);

    return 0;
}