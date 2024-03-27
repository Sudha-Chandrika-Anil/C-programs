#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_number;
    int age;
    double total_marks;
};

int main() {
    int i, n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Total Marks: ");
        scanf("%lf", &students[i].total_marks);
    }

    printf("\nStudent Records:\n\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("\tName: %s\n", students[i].name);
        printf("\tRoll Number: %d\n", students[i].roll_number);
        printf("\tAge: %d\n", students[i].age);
        printf("\tTotal Marks: %.2f\n\n", students[i].total_marks);
    }

    free(students);

    return 0;
}
