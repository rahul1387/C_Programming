#include <stdio.h>
void main()
{
    int num1, num2, digit, rev = 0;
    printf("Enter your number:");
    scanf("%d", &num1);
    num2 = num1;
    if (num1 <= 0)
    {
        printf("Invalid output");
    }
    else
    {
        while (num1 != 0)
        {
            digit = num1 % 10;
            rev = (rev * 10) + digit;
            num1 = num1 / 10;
        }
        if (num2 == rev)
        {
            printf("The number %d is a palindrome.", num2);
        }
        else
        {
            printf("The number %d is not a palindrome", num2);
        }
    }
}