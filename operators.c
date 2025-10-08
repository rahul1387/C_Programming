#include <stdio.h>

int main()
{
    // Normal arithmetic operators in C.
    int sum = 10 + 4;        // this will add them.
    int difference = 10 - 5; // this will subtract them
    int product = 10 * 2;    // this will multiply them.
    int division = 10 / 2;   // this will divide those two numbers(int) and display quetient value if float is provided then it will give precise value.
    int remainder = 10 % 5;  // this will divide them and gives the remainder value and it is denoted by (%).

    // Uninary arithmetic operators
    // 1. Increment(++) ---> increases the value by one. Can be used in two form prefix(++var) and postfix(var++)
    int num1 = 6;
    num1++; // this will increase the value by one (postfix increment).
    ++num1; // this will increase the value by two (prefix increment).

    // 2. Decrement(--) ---> decreases the value by one in prefix decrement and decreases the value by two if postfix decrement.
    int num2 = 12;
    num2--; // this will decrease the value by one (postfix decrement).
    --num2; // this will decrease the value by two (prefix decrement).

    // 3. Unary plus ---> indicates a positive number which is assign to a variable (rarely used).
    int x = +2; // stored as 2

    // 4. Unary minus ---> negates the value of an operand.
    int y = -6; // stored as -6
}
