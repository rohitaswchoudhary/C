// grade system using conditional statement.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char choice;
void main()
{
    // defining data types.
    int a[100];
    float avg = 0.0, sum = 0.0;
    int i, n = 5;

    printf("\n------------------------------------------------------");

    printf("\nEnter marks obtained in subjects to know your grade.\n");
    printf("------------------------------------------------------\n\n");

    char sub[][20] = {"Maths", "Science", "English", "Hindi", "Social study"};

    // taking input from user and checking its valid or not...
    do
    {
        for (i = 1; i <= n; i++)
        {
            int test;
            printf("\nEnter Marks in subject %d. %s : ", i, sub[i - 1]);
            scanf("%d", &test);
            if (test < 0)
            {
                printf("Invalid!!, Please provide the valid marks in range 0-100\n");
                return main();
            }
            else if (test > 100)
            {
                printf("Invalid Input!!, Please provide the valid marks in range 0-100\n");
                return main();
            }

            a[i] = test;
        }

        // calculating and displaying sum of elements in array.

        for (i = 1; i <= n; i++)
        {
            sum += a[i];
        }

        printf("\nAggregate marks in all subjects : %f\n\n", sum);

        avg = (float)sum / n;
        printf("Average of marks in all subjects : %.3f\n\n", avg);

        // giving output to user.

        if (avg <= 100 && avg >= 90)
        {
            printf("Grade : A");
        }
        else if (avg >= 80 && avg < 90)
        {
            printf("Grade : B");
        }
        else if (avg >= 70 && avg < 80)
        {
            printf("Grade : C");
        }
        else if (avg >= 60 && avg < 70)
        {
            printf("Grade : D");
        }
        else
        {
            printf("Fail!, Not secured enhough marks to pass.");
        }
    printf("\ndo You Want to enter marks for more students");
        scanf("%c", &choice);   
    }
    while(choice=="y"); 
    {
        return main();
    }
    
}
