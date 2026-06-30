#include <stdio.h>
#include <string.h>

int main()
{
    // Arrays to store book details
    int bookId[100];
    char title[100][50];
    char author[100][50];
    int issued[100];      // 0 = Available, 1 = Issued

    int n = 0;            // Number of books
    int choice;
    int i, id;
    int found;

    do
    {
        // Display menu
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            // Add a new book
            case 1:

                printf("Enter Book ID: ");
                scanf("%d", &bookId[n]);

                printf("Enter Book Title: ");
                scanf("%s", title[n]);

                printf("Enter Author Name: ");
                scanf("%s", author[n]);

                issued[n] = 0;   // Newly added book is available

                n++;             // Increase book count

                printf("Book added successfully.\n");
                break;

            // Display all books
            case 2:

                if(n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\nID\tTitle\tAuthor\tStatus\n");

                    for(i = 0; i < n; i++)
                    {
                        printf("%d\t%s\t%s\t",
                               bookId[i],
                               title[i],
                               author[i]);

                        if(issued[i] == 0)
                            printf("Available\n");
                        else
                            printf("Issued\n");
                    }
                }
                break;

            // Search a book using Book ID
            case 3:

                if(n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Book ID: ");
                    scanf("%d", &id);

                    for(i = 0; i < n; i++)
                    {
                        if(bookId[i] == id)
                        {
                            printf("\nBook Found\n");
                            printf("Book ID : %d\n", bookId[i]);
                            printf("Title   : %s\n", title[i]);
                            printf("Author  : %s\n", author[i]);

                            if(issued[i] == 0)
                                printf("Status  : Available\n");
                            else
                                printf("Status  : Issued\n");

                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Book not found.\n");
                    }
                }
                break;

            // Issue a book
            case 4:

                if(n == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    found = 0;

                    printf("Enter Book ID to issue: ");
                    scanf("%d", &id);

                    for(i = 0; i < n; i++)
                    {
                        if(bookId[i] == id)
                        {
                            found = 1;

                            if(issued[i] == 0)
                            {
                                issued[i] = 1;
                                printf("Book issued successfully.\n");
                            }
                            else
                            {
                                printf("Book is already issued.\n");
                            }

                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Book not found.\n");
                    }
                }
                break;

            // Exit program
            case 5:

                printf("Exiting program...\n");
                break;

            // Invalid choice
            default:

                printf("Invalid choice.\n");
        }

    } while(choice != 5);

    return 0;
}