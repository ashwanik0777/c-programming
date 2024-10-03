#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int rollNumber;
    char department[50];
};

struct Teacher
{
    char name[50];
    char qualification[50];
    char department[50];
};

struct Staff
{
    char name[50];
    char position[50];
    float salary;
};

int main()
{
    int a, b, c;
    printf("Enter the number of students: ");
    scanf("%d", &a);
    struct Student *students = malloc(a * sizeof(struct Student));
    for (int i = 1; i <= a; i++)
    {
        printf("\nEnter student name: ");
        scanf("%s", students[i].name);
        printf("Enter student roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter student department: ");
        scanf("%s", students[i].department);
    }

    struct Teacher *teachers = malloc(a * sizeof(struct Teacher));
    printf("\nEnter No. Of teacher:");
    scanf("%d", &b);
    for (int i = 1; i <= b; i++)
    {
        printf("\nEnter teacher name: ");
        scanf("%s", teachers[i].name);
        printf("Enter teacher qualification: ");
        scanf("%s", teachers[i].qualification);
        printf("Enter teacher department: ");
        scanf("%s", teachers[i].department);
    }
     struct Staff *staffs = malloc(a * sizeof(struct Staff));
    printf("\nEnter No. Of Staff:");
    scanf("%d", &c);
    for (int i = 1; i <= c; i++)
    {
        printf("\nEnter staff name: ");
        scanf("%s", staffs[i].name);
        printf("Enter staff position: ");
        scanf("%s", staffs[i].position);
        printf("Enter staff salary: ");
        scanf("%f", &staffs[i].salary);
    }
    return 0;
}
