#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    // Question 2
    printf("\n2. Which language is used for C programming?\n");
    printf("1. Compiler\n2. Interpreter\n3. High-Level Language\n4. Markup Language\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        score++;
    }

    // Question 3
    printf("\n3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        score++;
    }

    // Question 4
    printf("\n4. Which symbol is used for comments in C (single-line)?\n");
    printf("1. //\n2. /* */\n3. #\n4. %%\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        score++;
    }

    // Question 5
    printf("\n5. Which loop executes at least once?\n");
    printf("1. for\n2. while\n3. do-while\n4. None\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        score++;
    }

    // Display final score
    printf("\n===== RESULT =====\n");
    printf("Your Score = %d/5\n", score);

    if(score == 5)
    {
        printf("Excellent! Perfect Score!\n");
    }
    else if(score >= 3)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}