#include <stdio.h>

void main()
{
    int arr[6], i, num, rev, digit, count = 0;
    printf("Enter 6 numbers: ");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 6; i++)
    {
        num = arr[i];
        rev = 0;

        while (num != 0)
        {
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        if (arr[i] == rev)
        {
            count++;
        }
    }

    printf("Total number of plaindromes is: %d", count);
}
