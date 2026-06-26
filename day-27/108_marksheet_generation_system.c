#include <stdio.h>

// Structure to store student details
struct Student
{
    int roll;
    char name[50];
    float english, maths, science;
    float total;
    float percentage;
    char grade;
};

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Input details
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter English Marks: ");
        scanf("%f", &s[i].english);

        printf("Enter Maths Marks: ");
        scanf("%f", &s[i].maths);

        printf("Enter Science Marks: ");
        scanf("%f", &s[i].science);

        // Calculate total marks
        s[i].total = s[i].english + s[i].maths + s[i].science;

        // Calculate percentage
        s[i].percentage = s[i].total / 3;

        // Assign grade
        if(s[i].percentage >= 90)
            s[i].grade = 'A';
        else if(s[i].percentage >= 75)
            s[i].grade = 'B';
        else if(s[i].percentage >= 60)
            s[i].grade = 'C';
        else if(s[i].percentage >= 40)
            s[i].grade = 'D';
        else
            s[i].grade = 'F';
    }

    // Display marksheet
    printf("\n========== MARKSHEET ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("English     : %.2f\n", s[i].english);
        printf("Maths       : %.2f\n", s[i].maths);
        printf("Science     : %.2f\n", s[i].science);
        printf("Total       : %.2f\n", s[i].total);
        printf("Percentage  : %.2f%%\n", s[i].percentage);
        printf("Grade       : %c\n", s[i].grade);
    }

    return 0;
}