#include <stdio.h>

// Structure to store bank account details
struct Bank
{
    int accountNo;
    char name[50];
    char accountType[20];
    float balance;
};

int main()
{
    struct Bank b[100];
    int n, i;

    printf("Enter the number of account holders: ");
    scanf("%d", &n);

    // Input account details
    for(i = 0; i < n; i++)
    {
        printf("\nAccount Holder %d\n", i + 1);

        printf("Enter Account Number: ");
        scanf("%d", &b[i].accountNo);

        printf("Enter Account Holder Name: ");
        scanf(" %[^\n]", b[i].name);

        printf("Enter Account Type (Saving/Current): ");
        scanf(" %[^\n]", b[i].accountType);

        printf("Enter Account Balance: ");
        scanf("%f", &b[i].balance);
    }

    // Display account details
    printf("\n========== BANK ACCOUNT DETAILS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nAccount Holder %d\n", i + 1);
        printf("Account Number : %d\n", b[i].accountNo);
        printf("Name           : %s\n", b[i].name);
        printf("Account Type   : %s\n", b[i].accountType);
        printf("Balance        : %.2f\n", b[i].balance);
    }

    return 0;
}