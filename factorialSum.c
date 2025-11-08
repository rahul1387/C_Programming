#include <stdio.h>
void main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int fact = 1;
        for (int j = 1; j <= i; j++)
            fact *= j;
        sum += fact;
    }

    printf("Sum of factorials = %d\n", sum);
}