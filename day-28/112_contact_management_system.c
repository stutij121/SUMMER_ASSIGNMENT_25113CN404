#include <stdio.h>

// Structure to store contact details
struct Contact
{
    char name[50];
    long long phoneNo;
    char email[50];
};

int main()
{
    struct Contact c[100];
    int n, i;

    printf("Enter the number of contacts: ");
    scanf("%d", &n);

    // Input contact details
    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Enter Phone Number: ");
        scanf("%lld", &c[i].phoneNo);

        printf("Enter Email ID: ");
        scanf(" %[^\n]", c[i].email);
    }

    // Display contact details
    printf("\n========== CONTACT LIST ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nContact %d\n", i + 1);
        printf("Name         : %s\n", c[i].name);
        printf("Phone Number : %lld\n", c[i].phoneNo);
        printf("Email ID     : %s\n", c[i].email);
    }

    return 0;
}