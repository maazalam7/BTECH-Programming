#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

void displayStudent(struct Student student)
{
    printf("\nStudent Details\n");
    printf("Name = %s\n", student.name);
    printf("Age = %d\n", student.age);
    printf("Marks = %.2f\n", student.marks);
}

int main()
{
    struct Student student = {"Maaz", 19, 85.5};

    displayStudent(student);

    return 0;
}