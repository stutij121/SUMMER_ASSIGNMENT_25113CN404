#include <stdio.h>
#include <string.h>

#define MAX 100

// Global arrays to store contact details
int id[MAX];
char name[MAX][50];
char phone[MAX][15];
char email[MAX][50];

int n = 0;   // Number of contacts stored

// Function prototypes
void addContact();
void displayContacts();
void searchContact();
void updatePhone();

int main()
{
    int choice;

    do
    {
        printf("\n========== CONTACT MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Phone Number\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                updatePhone();
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);   // Repeat menu until user selects Exit

    return 0;
}

// Function to add a new contact
void addContact()
{
    printf("\nEnter Contact ID: ");
    scanf("%d", &id[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Phone Number: ");
    scanf("%s", phone[n]);

    printf("Enter Email: ");
    scanf("%s", email[n]);

    n++;   // Increase total number of contacts

    printf("Contact Added Successfully!\n");
}

// Function to display all contacts
void displayContacts()
{
    int i;

    if(n == 0)
    {
        printf("\nNo Contacts Available.\n");
        return;     // Return if no contacts exist
    }

    printf("\n-----------------------------------------------------------\n");
    printf("ID\tName\tPhone\t\tEmail\n");
    printf("-----------------------------------------------------------\n");

    // Display each contact
    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%s\t%s\n",
               id[i],
               name[i],
               phone[i],
               email[i]);
    }
}

// Function to search a contact using ID
void searchContact()
{
    int i, searchId;
    int found = 0;      // Flag variable

    if(n == 0)
    {
        printf("\nNo Contacts Available.\n");
        return;
    }

    printf("Enter Contact ID to Search: ");
    scanf("%d", &searchId);

    // Search contact using linear search
    for(i = 0; i < n; i++)
    {
        if(id[i] == searchId)
        {
            printf("\nContact Found!\n");
            printf("ID    : %d\n", id[i]);
            printf("Name  : %s\n", name[i]);
            printf("Phone : %s\n", phone[i]);
            printf("Email : %s\n", email[i]);

            found = 1;
            break;      // Stop searching once found
        }
    }

    if(found == 0)
    {
        printf("Contact Not Found.\n");
    }
}

// Function to update phone number of a contact
void updatePhone()
{
    int i, searchId;
    int found = 0;

    if(n == 0)
    {
        printf("\nNo Contacts Available.\n");
        return;
    }

    printf("Enter Contact ID: ");
    scanf("%d", &searchId);

    // Find the contact
    for(i = 0; i < n; i++)
    {
        if(id[i] == searchId)
        {
            printf("Enter New Phone Number: ");
            scanf("%s", phone[i]);

            printf("Phone Number Updated Successfully!\n");

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Contact Not Found.\n");
    }
}