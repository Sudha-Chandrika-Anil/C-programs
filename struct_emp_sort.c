#include <stdio.h>
#include <string.h>

// Structure for employees
struct Employee {
    int eno;
    char ename[50];
    float esal;
    int dno;
};

void searchEmployeeByNumber(struct Employee employees[], int n, int eno) {
    int i;
    for (i = 0; i < n; i++) {
        if (employees[i].eno == eno) {
            printf("Employee Found!\n");
            printf("Employee Number: %d\n", employees[i].eno);
            printf("Employee Name: %s\n", employees[i].ename);
            printf("Employee Salary: %.2f\n", employees[i].esal);
            printf("Department Number: %d\n", employees[i].dno);
            return;
        }
    }
    printf("Employee with number %d not found.\n", eno);
}

void sortEmployeesByName(struct Employee employees[], int n) {
    int i, j;
    struct Employee temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(employees[i].ename, employees[j].ename) > 0) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    printf("Employees sorted by Name:\n");
    for (i = 0; i < n; i++) {
        printf("Employee Number: %d, Name: %s, Salary: %.2f, Department Number: %d\n",
               employees[i].eno, employees[i].ename, employees[i].esal, employees[i].dno);
    }
}

void sortEmployeesBySalary(struct Employee employees[], int n) {
    int i, j;
    struct Employee temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (employees[i].esal > employees[j].esal) {
                temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    printf("Employees sorted by Salary:\n");
    for (i = 0; i < n; i++) {
        printf("Employee Number: %d, Name: %s, Salary: %.2f, Department Number: %d\n",
               employees[i].eno, employees[i].ename, employees[i].esal, employees[i].dno);
    }
}

void deleteEmployeeByNumber(struct Employee employees[], int* n, int eno) {
    int i, j;
    for (i = 0; i < *n; i++) {
        if (employees[i].eno == eno) {
            for (j = i; j < *n - 1; j++) {
                employees[j] = employees[j + 1];
            }
            (*n)--;
            printf("Employee with number %d deleted successfully.\n", eno);
            return;
        }
    }
    printf("Employee with number %d not found. Deletion failed.\n", eno);
}

int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[100];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].eno);
        printf("Employee Name: ");
        scanf("%s", employees[i].ename);
        printf("Employee Salary: ");
        scanf("%f", &employees[i].esal);
        printf("Department Number: ");
        scanf("%d", &employees[i].dno);
    }

    // Searching an employee by number
    int searchEmpNo;
    printf("\nEnter the employee number to search: ");
    scanf("%d", &searchEmpNo);
    searchEmployeeByNumber(employees, n, searchEmpNo);

    // Sorting employees by name
    sortEmployeesByName(employees, n);

    // Sorting employees by salary
    sortEmployeesBySalary(employees, n);

    // Deleting an employee by number
    int deleteEmpNo;
    printf("\nEnter the employee number to delete: ");
    scanf("%d", &deleteEmpNo);
    deleteEmployeeByNumber(employees, &n, deleteEmpNo);

    return 0;
}
