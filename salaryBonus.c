#include <stdio.h>
void main()
{
    float salary, total;
    int years;
    printf("Enter salary: ");
    scanf("%f", &salary);
    printf("Enter years of service: ");
    scanf("%d", &years);

    if (years > 5)
        total = salary + (salary * 0.10);
    else
        total = salary;

    printf("Total salary with bonus: %f", total);
}