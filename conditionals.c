#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    // if-else and if-else ladder.
    if (age >= 18)
    {
        printf("You can drive!! \n");
    }
    else if (age < 18)
    {
        printf("You cannot drive :( \n");
    }
    else
    {
        printf("Invalid age \n");
    }

    // Ternary operations --> Are used to simplify the code instead of using if else we can directly use this.

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    number > 0 ? printf("Number is positive") : number < 0 ? printf("Number is negative") : printf("Number is zero");

    /*
    syntax to use ternary operations is :

        1. condition ? do Something if TRUE : do Something if FALSE; ---> This is like using only if else.
        2. Condition ? do Something if TRUE : condition ? do Something if TRUE : do Something if FALSE ---> This is like using if-else ladder.
    */
}