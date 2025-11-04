#include <stdio.h>

// area of square
int main()
{
    int side;
    printf("Enter side");
    scanf("%d", &side);

    printf("The area of square is: ", side * side);

    // area of Circle
    int radius;
    printf("Enter radius: ");
    scanf("%d", &radius);

    printf("The area of circle is: ", 3.14 * radius * radius);
    return 0;
}
