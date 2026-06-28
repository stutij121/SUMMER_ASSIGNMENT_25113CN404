#include <stdio.h>

// Structure to store book details
struct Book
{
    int bookID;
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book b[100];
    int n, i;

    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Input book details
    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].bookID);

        printf("Enter Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Enter Author Name: ");
        scanf(" %[^\n]", b[i].author);

        printf("Enter Book Price: ");
        scanf("%f", &b[i].price);
    }

    // Display book details
    printf("\n========== LIBRARY RECORDS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", b[i].bookID);
        printf("Title       : %s\n", b[i].title);
        printf("Author      : %s\n", b[i].author);
        printf("Price       : %.2f\n", b[i].price);
    }

    return 0;
}