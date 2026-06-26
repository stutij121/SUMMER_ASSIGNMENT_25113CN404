#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000, deposit, withdraw;

    do
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                // Display current balance
                printf("Current Balance = %.2f\n", balance);
                break;

            case 2:
                // Deposit money
                printf("Enter amount to deposit: ");
                scanf("%f", &deposit);

                if(deposit > 0)
                {
                    balance = balance + deposit;
                    printf("Deposit Successful!\n");
                    printf("Updated Balance = %.2f\n", balance);
                }
                else
                {
                    printf("Invalid deposit amount!\n");
                }
                break;

            case 3:
                // Withdraw money
                printf("Enter amount to withdraw: ");
                scanf("%f", &withdraw);

                if(withdraw <= 0)
                {
                    printf("Invalid withdrawal amount!\n");
                }
                else if(withdraw > balance)
                {
                    printf("Insufficient Balance!\n");
                }
                else
                {
                    balance = balance - withdraw;
                    printf("Withdrawal Successful!\n");
                    printf("Remaining Balance = %.2f\n", balance);
                }
                break;

            case 4:
                // Exit the program
                printf("Thank you for using the ATM!\n");
                break;

            default:
                // Invalid choice
                printf("Invalid Choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}