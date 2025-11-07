#include <stdio.h>

int main()
{
    int num1, num2, max, LCM;

    printf("Input 1st number for LCM: ");
    scanf("%d", &num1);
    printf("Input 2nd number for LCM: ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            LCM = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d is : %d\n", num1, num2, LCM);

    return 0;
}