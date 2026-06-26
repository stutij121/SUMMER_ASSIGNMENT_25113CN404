#include <stdio.h>

// Structure to store salary details
struct Employee
{
    int empID;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float netSalary;
};

int main()
{
    struct Employee emp[100];
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].empID);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        printf("Enter HRA: ");//houserent allowance
        scanf("%f", &emp[i].hra);

        printf("Enter DA: ");//dearness allowance
        scanf("%f", &emp[i].da);

        // Calculate Net Salary
        emp[i].netSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    // Display salary details
    printf("\n========== SALARY DETAILS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID  : %d\n", emp[i].empID);
        printf("Name         : %s\n", emp[i].name);
        printf("Basic Salary : %.2f\n", emp[i].basicSalary);
        printf("HRA          : %.2f\n", emp[i].hra);
        printf("DA           : %.2f\n", emp[i].da);
        printf("Net Salary   : %.2f\n", emp[i].netSalary);
    }

    return 0;
}