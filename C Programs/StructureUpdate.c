#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student student = {"Maaz", 19, 85.5};

    printf("Before Update:\n");
    printf("Name = %s\n", student.name);
    printf("Age = %d\n", student.age);
    printf("Marks = %.2f\n", student.marks);

    student.marks = 95.0;

    printf("\nAfter Update:\n");
    printf("Name = %s\n", student.name);
    printf("Age = %d\n", student.age);
    printf("Marks = %.2f\n", student.marks);

    return 0;
}