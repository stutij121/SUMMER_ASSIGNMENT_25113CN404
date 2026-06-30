#include <stdio.h>
#include <string.h>

int main()
{
    // Arrays to store employee details
    int empId[100];
    char empName[100][50];
    char department[100][30];
    float salary[100];

    int n = 0;          // Number of employees
    int choice;
    int i, id;
    int found;

    do
    {
        // Display menu
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            // Add a new employee
            case 1:

                printf("Enter Employee ID: ");
                scanf("%d", &empId[n]);

                printf("Enter Employee Name: ");
                scanf("%s", empName[n]);

                printf("Enter Department: ");
                scanf("%s", department[n]);

                printf("Enter Salary: ");
                scanf("%f", &salary[n]);

                n++;    // Increase employee count

                printf("Employee added successfully.\n");
                break;

            // Display all employees
            case 2:

                if(n == 0)
                {
                    printf("No employee records found.\n");
                }
                else
                {
                    printf("\nID\tName\tDepartment\tSalary\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%s\t\t%.2f\n",
                               empId[i],
                               empName[i],
                               department[i],
                               salary[i]);
                    }
                }
                break;

            // Search employee by ID
            case 3:

                if(n == 0)
                {
                    printf("No employee records found.\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Employee ID: ");
                    scanf("%d", &id);

                    for(i = 0; i < n; i++)
                    {
                        if(empId[i] == id)
                        {
                            printf("\nEmployee Found\n");
                            printf("ID         : %d\n", empId[i]);
                            printf("Name       : %s\n", empName[i]);
                            printf("Department : %s\n", department[i]);
                            printf("Salary     : %.2f\n", salary[i]);

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Employee not found.\n");
                    }
                }
                break;

            // Update employee salary
            case 4:

                if(n == 0)
                {
                    printf("No employee records found.\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Employee ID: ");
                    scanf("%d", &id);

                    for(i = 0; i < n; i++)
                    {
                        if(empId[i] == id)
                        {
                            printf("Enter New Salary: ");
                            scanf("%f", &salary[i]);

                            printf("Salary updated successfully.\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Employee not found.\n");
                    }
                }
                break;

            // Exit program
            case 5:

                printf("Exiting program...\n");
                break;

            // Invalid menu choice
            default:

                printf("Invalid choice.\n");
        }

    } while(choice != 5);   // Repeat until Exit is selected

    return 0;
}