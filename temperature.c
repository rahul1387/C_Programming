#include <stdio.h>
void main()
{
    float temp, c, f, k;
    int opt1, opt2;
    printf("Enter the temperature:");
    scanf("%f", &temp);
    printf("Choose one of the unit- \n1.Celcius \n2.Fahrenhiet \n3.Kelvin \n");
    scanf("%d", &opt1);
    printf("Enter 2nd unit:\n1.Celcius \n2.Fahrenhiet \n3.Kelvin \n");
    scanf("%d", &opt2);

    if (opt1 == opt2)
    {
        printf("Both units are same");
    }
    else
        switch (opt2)
        {
        case 1:
            if (opt1 == 2)
            {
                c = ((temp - 32) * 5 / 9.0);
                printf("%f", c);
            }
            else
            {
                c = temp - 273;

                printf("%f", c);
            }
            break;

        case 2:
            if (opt1 == 1)
            {
                f = (temp * (9 / 5.0) + 32);
                printf("%f", f);
            }
            else
            {
                f = ((temp - 273) * 9/5.0) + 32;
                printf("%f", f);
            }
            break;

        case 3:
            if (opt1 == 1)
            {
                k = temp + 273;
                printf("%f", k);
            }
            else
            {
                k = ((temp - 32) * 5/9.0) + 273;

                printf("%f", k);
            }
            break;

        default:
            printf("Invalid option");
        }
}