#include <stdio.h>

void main()
{
    int arr[5], i, num, sum, maxSum = 0, maxNum;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        num = arr[i];
        sum = 0;
        while (num != 0)
        {
            sum += num % 10;
            num /= 10;
        }

        if (sum > maxSum)
        {
            maxSum = sum;
            maxNum = arr[i];
        }
    }

    printf("Number with maximum digit sum: %d\n", maxNum);
    printf("Maximum digit sum: %d\n", maxSum);

}
