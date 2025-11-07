#include <stdio.h>
void main()
{
    float salary, hra, da, gross, tax;
    printf("Enter your salary:");
    scanf("%f", &salary);

    if (salary <= 0)
    {
        printf("Invalid value");
    }
    else
    {
        hra = (salary / 100) * 20;
        da = (salary / 100) * 40;
        gross = salary + hra + da;
        if (gross > 50000)
        {
            gross = gross - ((gross / 100) * 10);
            printf("Your gross salary is : %f", gross);
        }
        else
        {
            printf("Your gross salary is : %f", gross);
        }
    }
}