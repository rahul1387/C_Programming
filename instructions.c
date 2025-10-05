#include <stdio.h>
#include <math.h>

int main()
{
    // These types of declaration we can do in c.
    int a = 12;
    int b = a;
    int c = b + 1;
    int d = 1, e;
    int power = pow(a, c);
    printf("%d", power); // This will print power of a and c.
    return 0;
}