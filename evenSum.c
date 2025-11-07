#include <stdio.h>

void main()
{
    int arr[7], i, sum = 0;
    printf("Enter 7 numbers:");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 7; i += 2)
    {
        sum += arr[i];
    }

    printf("The sum of numbers at even indices is: %d\n", sum);
}
