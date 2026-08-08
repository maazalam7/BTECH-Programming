#include <stdio.h>

int main()
{
    int numbers[5];
    int sum = 0;
    float average;

    printf("enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    average = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("average = %.2f", average);

    return 0;
}