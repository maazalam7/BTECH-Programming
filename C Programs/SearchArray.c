#include <stdio.h>

int main()
{
    int numbers[5];
    int search;
    int found = 0;

    printf("enter 5 numbers:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("enter number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 5; i++)
    {
        if (numbers[i] == search)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
        printf("number found!");
    else
        printf("number not found!");

    return 0;
}