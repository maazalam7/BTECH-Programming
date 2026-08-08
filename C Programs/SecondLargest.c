#include <stdio.h>
#include <limits.h>

int main()
{
    int numbers[5];
    int largest, secondLargest;

    printf("enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    largest = secondLargest = INT_MIN;

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] > largest)
        {
            secondLargest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > secondLargest && numbers[i] != largest)
        {
            secondLargest = numbers[i];
        }
    }

    printf("largest = %d\n", largest);
    printf("second Largest = %d", secondLargest);

    return 0;
}