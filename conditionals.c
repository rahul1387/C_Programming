#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You can drive!!");
    }
    else if (age < 18)
    {
        printf("You cannot drive :(");
    }
    else
    {
        printf("Invalid age");
    }
}