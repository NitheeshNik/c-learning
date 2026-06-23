#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// struct = A custom container that holds multiple
//          pieces of related information
//          Similar to Objects in other languages

typedef struct
{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student student);

int main()
{

    Student student1 = {"Spongebob", 30, 2.5, true}; // If you enter false it show "NO"
    Student student2 = {"kumar", 39, 2.9, true};
    Student student3 = {"Nik", 20, 0.5, false};
    Student student4 = {0}; // struct is no value you will assain a value later using (strcpy)

    strcpy(student4.name, "sandy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    // printf("%s\n", student4.name);
    // printf("%d\n", student4.age);
    // printf("%.2f\n", student4.gpa);
    // printf("%s\n", (student4.isFullTime) ? "Yes" : "No");

    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;
}

void printStudent(Student student)
{

    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("Full-time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}