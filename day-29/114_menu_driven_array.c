#include <stdio.h>

int main()
{
    int a[100], n = 0;
    int choice, i, key;
    int max, min, sum;

    do
    {
        printf("\n===== MENU DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Enter Array Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Maximum Element\n");
        printf("4. Find Minimum Element\n");
        printf("5. Find Sum of Elements\n");
        printf("6. Search an Element\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter size of array: ");
                scanf("%d", &n);

                printf("Enter %d elements:\n", n);
                for(i = 0; i < n; i++)
                {
                    scanf("%d", &a[i]);
                }
                break;

            case 2:
                if(n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    printf("Array elements are: ");
                    for(i = 0; i < n; i++)
                    {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                if(n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    max = a[0];

                    for(i = 1; i < n; i++)
                    {
                        if(a[i] > max)
                        {
                            max = a[i];
                        }
                    }

                    printf("Maximum element = %d\n", max);
                }
                break;

            case 4:
                if(n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    min = a[0];

                    for(i = 1; i < n; i++)
                    {
                        if(a[i] < min)
                        {
                            min = a[i];
                        }
                    }

                    printf("Minimum element = %d\n", min);
                }
                break;

            case 5:
                if(n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    sum = 0;

                    for(i = 0; i < n; i++)
                    {
                        sum += a[i];
                    }

                    printf("Sum of elements = %d\n", sum);
                }
                break;

            case 6:
                if(n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    int found = 0;

                    printf("Enter element to search: ");
                    scanf("%d", &key);

                    for(i = 0; i < n; i++)
                    {
                        if(a[i] == key)
                        {
                            printf("Element found at index %d\n", i);
                            found = 1;
                            break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Element not found.\n");
                    }
                }
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 7);

    return 0;
}