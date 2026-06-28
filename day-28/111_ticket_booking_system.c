#include <stdio.h>

// Structure to store ticket details
struct Ticket
{
    int ticketNo;
    char passengerName[50];
    char source[30];
    char destination[30];
    float fare;
};

int main()
{
    struct Ticket t[100];
    int n, i;

    printf("Enter the number of tickets to book: ");
    scanf("%d", &n);

    // Input ticket details
    for(i = 0; i < n; i++)
    {
        printf("\nTicket %d\n", i + 1);

        printf("Enter Ticket Number: ");
        scanf("%d", &t[i].ticketNo);

        printf("Enter Passenger Name: ");
        scanf(" %[^\n]", t[i].passengerName);

        printf("Enter Source: ");
        scanf(" %[^\n]", t[i].source);

        printf("Enter Destination: ");
        scanf(" %[^\n]", t[i].destination);

        printf("Enter Fare: ");
        scanf("%f", &t[i].fare);
    }

    // Display ticket details
    printf("\n========== TICKET DETAILS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nTicket %d\n", i + 1);
        printf("Ticket Number  : %d\n", t[i].ticketNo);
        printf("Passenger Name : %s\n", t[i].passengerName);
        printf("Source         : %s\n", t[i].source);
        printf("Destination    : %s\n", t[i].destination);
        printf("Fare           : %.2f\n", t[i].fare);
    }

    return 0;
}