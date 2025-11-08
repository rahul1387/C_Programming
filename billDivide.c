#include <stdio.h>
void main()
{
    float bill, share;
    int friends;
    printf("Enter total bill amount: ");
    scanf("%f", &bill);
    printf("Enter number of friends: ");
    scanf("%d", &friends);

    if (friends <= 0)
    {
        printf("Invalid number of friends.");
    }
    else
    {
        share = bill / friends;
        printf("Each friend should pay: %.2f", share);
    }
}