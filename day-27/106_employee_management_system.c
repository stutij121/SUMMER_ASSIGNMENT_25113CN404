#include <stdio.h>

// Structure to store employee details
struct Employee
{
    int empID;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];   // Array of structures
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    printf("\nEnter Employee Details:\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].empID);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Display employee details
    printf("\n===== EMPLOYEE RECORDS =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID   : %d\n", emp[i].empID);
        printf("Employee Name : %s\n", emp[i].name);
        printf("Salary        : %.2f\n", emp[i].salary);
    }

    return 0;
}