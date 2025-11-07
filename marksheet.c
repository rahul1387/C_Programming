#include <stdio.h>
void main()
{
    int arr1[5], arr2[5], arr3[5], sNumber, i, total1 = 0, total2 = 0, total3 = 0, opt;
    float avg1, avg2, avg3;
    char grade1, grade2, grade3;
    printf("Enter marks of 1st student:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
        if (arr1[i] < 0|| arr1[i] > 100)
        {
            printf("Marks should be between (0-100)");
        }
    }
    printf("Enter marks of 2nd student:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr2[i]);
        if (arr2[i] < 0 || arr2[i] > 100)
        {
            printf("Marks should be between (0-100)");
        }
    }
    printf("Enter marks of 3rd student:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr3[i]);
        if (arr3[i] < 0 || arr3[i] > 100)
        {
            printf("Marks should be between (0-100)");
        }
    }
    for (i = 0; i < 5; i++)
    {
        total1 +=arr1[i];
    }
    avg1 = (total1) / 500.0 * 100;
    for (i = 0; i < 5; i++)
    {
        total2 +=arr2[i];
    }
    avg2 = (total2) / 500.0 * 100;
    for (i = 0; i < 5; i++)
    {
        total3 +=arr3[i];
    }
    avg3 = (total3) / 500.0 * 100;

    {
        if (avg1 > 80)
        {
            grade1 = 'S';
        }
        else if (avg1 < 80 && avg1 >= 70)
        {
            grade1 = 'A';
        }
        else if (avg1 < 70 && avg1 >= 60)
        {
            grade1 = 'B';
        }
        else if (avg1 < 60 && avg1 >= 50)
        {
            grade1 = 'C';
        }
        else if (avg1 < 50 && avg1 >= 40)
        {
            grade1 = 'D';
        }
        else
        {
            grade1 = 'F';
        }
    }
     {
        if (avg2 > 80)
        {
            grade2 = 'S';
        }
        else if (avg2 < 80 && avg2 >= 70)
        {
            grade2 = 'A';
        }
        else if (avg2 < 70 && avg2 >= 60)
        {
            grade2 = 'B';
        }
        else if (avg2 < 60 && avg2 >= 50)
        {
            grade2 = 'C';
        }
        else if (avg2 < 50 && avg2 >= 40)
        {
            grade3 = 'D';
        }
        else
        {
            grade2 = 'F';
        }
    }
     {
        if (avg3 > 80)
        {
            grade3 = 'S';
        }
        else if (avg3 < 80 && avg3 >= 70)
        {
            grade3 = 'A';
        }
        else if (avg3 < 70 && avg3 >= 60)
        {
            grade1 = 'B';
        }
        else if (avg3 < 60 && avg3 >= 50)
        {
            grade3 = 'C';
        }
        else if (avg3 < 50 && avg3 >= 40)
        {
            grade3 = 'D';
        }
        else
        {
            grade3 = 'F';
        }
    }

    printf("Choose one of the following options: \n1-Grade and Aggregate of a student \n2-Topper \nChoice:");
    scanf("%d", &opt);
    switch (opt)
    {
    case 1:
        printf("Enter the student number:");
        scanf("%d", &sNumber);
        switch (sNumber)
        {
            case 1:
                printf("Grade:%c \nAggregate:%f",grade1,avg1);
                break;
            case 2:
                printf("Grade:%c \nAggregate:%f",grade2,avg2);
                break;
            case 3:
                printf("Grade:%c \nAggregate:%f",grade3,avg3);
                break;
            
        }
        break;
    case 2:
        if(avg1>avg2 && avg1>avg3)
        {
            printf("Student 1 is the topper");
        }
        else if(avg2>avg1 && avg2>avg3)
        {
            printf("Student 2 is the topper");
        }
        else
        printf("Student 3 is the topper");
    }
}