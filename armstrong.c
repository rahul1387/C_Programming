#include <stdio.h>
#include <math.h>

void main()
{
    int n, num, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, 3);
        n = n / 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);
}