#include <stdio.h>
#include <string.h>

int main()
{
    // Arrays to store student details
    int roll[100], marks[100];
    char name[100][50];

    int n = 0;          // Number of students currently stored
    int choice;         // Stores user's menu choice
    int i;              // Loop variable
    int rno;            // Roll number entered for searching/updating
    int found;          // Flag to check if student exists

    do
    {
        // Display menu
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Records\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            // Add a new student
            case 1:

                printf("Enter Roll Number: ");
                scanf("%d", &roll[n]);

                printf("Enter Student Name: ");
                scanf("%s", name[n]);

                printf("Enter Marks: ");
                scanf("%d", &marks[n]);

                n++;   // Increase total number of students

                printf("Student record added successfully.\n");
                break;

            // Display all student records
            case 2:

                if(n == 0)
                {
                    printf("No records available.\n");
                }
                else
                {
                    printf("\nRoll\tName\tMarks\n");

                    // Print each student's details
                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%d\n",
                               roll[i],
                               name[i],
                               marks[i]);
                    }
                }
                break;

            // Search a student using roll number
            case 3:

                if(n == 0)
                {
                    printf("No records available.\n");
                }
                else
                {
                    found = 0;   // Assume student is not found

                    printf("Enter Roll Number to search: ");
                    scanf("%d", &rno);

                    // Search through the roll number array
                    for(i = 0; i < n; i++)
                    {
                        if(roll[i] == rno)
                        {
                            printf("\nStudent Found\n");
                            printf("Roll Number : %d\n", roll[i]);
                            printf("Name        : %s\n", name[i]);
                            printf("Marks       : %d\n", marks[i]);

                            found = 1;   // Student found
                            break;       // Exit loop
                        }
                    }

                    // If no matching roll number was found
                    if(found == 0)
                    {
                        printf("Student not found.\n");
                    }
                }
                break;

            // Update marks of a student
            case 4:

                if(n == 0)
                {
                    printf("No records available.\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Roll Number: ");
                    scanf("%d", &rno);

                    // Search for the student
                    for(i = 0; i < n; i++)
                    {
                        if(roll[i] == rno)
                        {
                            printf("Enter New Marks: ");
                            scanf("%d", &marks[i]);

                            printf("Marks updated successfully.\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Student not found.\n");
                    }
                }
                break;

            // Exit the program
            case 5:

                printf("Exiting program...\n");
                break;

            // Invalid menu choice
            default:

                printf("Invalid choice.\n");
        }

    } while(choice != 5);   // Repeat until user chooses Exit

    return 0;
}