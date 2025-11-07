#include <stdio.h>

void main()
{
    int arr[5], i, num, rev, digit;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reversed numbers: ");
    for (i = 0; i < 5; i++)
    {
        num = arr[i];
        rev = 0;

        while (num != 0)
        {
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        printf("%d ,", rev);
    }
}
