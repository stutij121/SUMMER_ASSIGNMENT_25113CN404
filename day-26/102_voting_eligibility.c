#include <stdio.h>

int main()
{
    int age;

    // Input age from the user
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check for invalid age
    if (age < 0)
    {
        printf("Invalid age entered.");
    }
    // Check voting eligibility
    else if (age >= 18)
    {
        printf("You are eligible to vote.");
    }
    else
    {
        printf("You are not eligible to vote.");
    }

    return 0;
}