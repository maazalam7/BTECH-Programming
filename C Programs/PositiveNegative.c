#include <stdio.h>

int main()
{
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("positive Number");
    }
    else if (num < 0)
    {
        printf("negative Number");
    }
    else
    {
        printf("zero");
    }

    return 0;
}