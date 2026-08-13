#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student students[3];
    int highest = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter Student %d details\n", i + 1);

        printf("Name: ");
        scanf("%49s", students[i].name);

        printf("Age: ");
        scanf("%d", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    for (int i = 1; i < 3; i++)
    {
        if (students[i].marks > students[highest].marks)
        {
            highest = i;
        }
    }

    printf("\n--- Highest Marks ---\n");
    printf("Name = %s\n", students[highest].name);
    printf("Age = %d\n", students[highest].age);
    printf("Marks = %.2f\n", students[highest].marks);

    return 0;
}